; ------------- anim script macros -------------
; Скрипты анимации объектов ($20(obj)), интерпретатор update_objects_anim (вызывается через кадр).
; Скрипт - последовательность слов. Слово < $EA00 - кадр: короткий адрес ячейки
; с указателем на кадр спрайта (dc.w frame_xxx / off_xxx), показывается один тик.
; Слово со старшим байтом $EA..$FE - команда, младший байт - её аргумент.
; Команда = индекс в obj_script_cmd_table (база $EA; у скриптов движения та же таблица с базой $80,
; см. move_script.inc). Команды выполняются сразу после кадра, до следующего кадра.
; Скрипты переведены в макросы утилитой anim_to_macros.py.
;
; addr - переменная в RAM ($FFxxxx, в скрипт пишется младшее слово), ofs - смещение поля объекта.
; Для fa_if_* условия FM_GT/FM_EQ/FM_NE/FM_LE из move_script.inc.

; $EA: goto
fa_goto macro target
        dc.b $EA, 0
        dc.l target
        endm

; $EB 00: инвертировать отражение по X (9(obj))
fa_flip_x macro
        dc.b $EB, 0
        endm

; $EB 01: инвертировать отражение по Y ($35(obj))
fa_flip_y macro
        dc.b $EB, 1
        endm

; $EC 01: конец анимации (clr.l $20(obj)), последний кадр остаётся на экране
fa_end macro
        dc.b $EC, 1
        endm

; $EC 00: остановить скрипт движения объекта (clr.l $A(obj)), анимация продолжается
fa_stop_move macro
        dc.b $EC, 0
        endm

; $ED: записать значение. Байт берётся из младшего байта слова val.
; fa_set_* - в RAM: [addr] = val; fa_set_obj_* - в поле объекта: obj+ofs = val
fa_set_b macro addr,val
        dc.b $ED, $01
        dc.w (addr)&$FFFF, val
        endm

fa_set_w macro addr,val
        dc.b $ED, $02
        dc.w (addr)&$FFFF, val
        endm

fa_set_l macro addr,val
        dc.b $ED, $04
        dc.w (addr)&$FFFF
        dc.l val
        endm

fa_set_obj_b macro ofs,val
        dc.b $ED, $11
        dc.w ofs, val
        endm

fa_set_obj_w macro ofs,val
        dc.b $ED, $12
        dc.w ofs, val
        endm

fa_set_obj_l macro ofs,val
        dc.b $ED, $14
        dc.w ofs
        dc.l val
        endm

; $EE $80|n: показывать предыдущий кадр ещё n тиков ($37(obj))
fa_hold macro n
        dc.b $EE, $80|(n)
        endm

; $EE n: начало цикла, тело до fa_next выполняется n+1 раз ($28/$24(obj))
fa_loop macro n
        dc.b $EE, n
        endm

; $EF 00: конец тела цикла fa_loop
fa_next macro
        dc.b $EF, 0
        endm

; $F0: goto target с вероятностью p/256
fa_rand_goto macro p,target
        dc.b $F0, p
        dc.l target
        endm

; $F1 00: x += dx (при отражении по X - x -= dx)
fa_move_x macro dx
        dc.b $F1, 0
        dc.w dx
        endm

; $F1 01: y += dy (при отражении по Y - y -= dy)
fa_move_y macro dy
        dc.b $F1, 1
        dc.w dy
        endm

; $F2: goto target, если бит bitn (0..7) байта установлен / сброшен.
; fa_if_bit_* - байт RAM [addr], fa_if_obj_bit_* - байт obj+ofs
fa_if_bit_set macro addr,bitn,target
        dc.b $F2, $40|(bitn)
        dc.w (addr)&$FFFF
        dc.l target
        endm

fa_if_bit_clr macro addr,bitn,target
        dc.b $F2, bitn
        dc.w (addr)&$FFFF
        dc.l target
        endm

fa_if_obj_bit_set macro ofs,bitn,target
        dc.b $F2, $C0|(bitn)
        dc.w ofs
        dc.l target
        endm

fa_if_obj_bit_clr macro ofs,bitn,target
        dc.b $F2, $80|(bitn)
        dc.w ofs
        dc.l target
        endm

; $F3 n: запустить звук/песню n (если звуковые эффекты включены)
fa_sound macro n
        dc.b $F3, n
        endm

; $F3 $80|n: остановить звук/песню n
fa_sound_stop macro n
        dc.b $F3, $80|(n)
        endm

; $F4: if [addr] <cond> val -> goto target (байт сравнивается с младшим байтом слова val).
; fa_if_* - переменная RAM, fa_if_obj_* - поле объекта obj+ofs
fa_if_b macro cond,addr,val,target
        dc.b $F4, (cond)|FM_SIZE_B
        dc.w (addr)&$FFFF, val
        dc.l target
        endm

fa_if_w macro cond,addr,val,target
        dc.b $F4, (cond)|FM_SIZE_W
        dc.w (addr)&$FFFF, val
        dc.l target
        endm

fa_if_l macro cond,addr,val,target
        dc.b $F4, (cond)|FM_SIZE_L
        dc.w (addr)&$FFFF
        dc.l val, target
        endm

fa_if_obj_b macro cond,ofs,val,target
        dc.b $F4, $80|(cond)|FM_SIZE_B
        dc.w ofs, val
        dc.l target
        endm

fa_if_obj_w macro cond,ofs,val,target
        dc.b $F4, $80|(cond)|FM_SIZE_W
        dc.w ofs, val
        dc.l target
        endm

fa_if_obj_l macro cond,ofs,val,target
        dc.b $F4, $80|(cond)|FM_SIZE_L
        dc.w ofs
        dc.l val, target
        endm

; $F5: создать объект по шаблону tmpl в точке (x+dx, y+dy) с тем же отражением
; (dx/dy зеркалятся вместе с объектом).
; slot: 0..3 - группа свободных слотов (find_free_obj_slot_ad06/ad36/ad66/ad96), 4 - слот Джима.
; ascr/mscr - скрипты анимации и движения нового объекта (0 - оставить из шаблона).
fa_spawn macro slot,tmpl,dx,dy,ascr,mscr
        dc.b $F5, slot
        dc.l tmpl
        dc.b dx, dy
        dc.l ascr, mscr
        endm

; $F6 00: удалить объект
fa_delete macro
        dc.b $F6, 0
        endm

; $F7 00: повернуться к Джиму по X
fa_face_jim macro
        dc.b $F7, 0
        endm

; $F8 00: перейти на анимацию Джима по умолчанию для его состояния (scmd_0E_jim_default_anim)
fa_jim_default_anim macro
        dc.b $F8, 0
        endm

; $F9: разгон скорости $18/$1A(obj) в сторону Джима (scmd_0F_chase_jim).
; accel - ускорение по X (по Y в 1.5 раза больше), dy/dx - смещение точки сравнения от объекта
fa_chase_jim macro accel,dy,dx
        dc.b $F9, accel, dy, dx
        endm

; $FA: прибавить / вычесть значение.
; fa_add_*/fa_sub_* - в RAM: [addr] +=/-= val; fa_add_obj_*/fa_sub_obj_* - в поле obj+ofs
fa_add_b macro addr,val
        dc.b $FA, $01
        dc.w (addr)&$FFFF, val
        endm

fa_add_w macro addr,val
        dc.b $FA, $02
        dc.w (addr)&$FFFF, val
        endm

fa_add_l macro addr,val
        dc.b $FA, $04
        dc.w (addr)&$FFFF
        dc.l val
        endm

fa_sub_b macro addr,val
        dc.b $FA, $81
        dc.w (addr)&$FFFF, val
        endm

fa_sub_w macro addr,val
        dc.b $FA, $82
        dc.w (addr)&$FFFF, val
        endm

fa_sub_l macro addr,val
        dc.b $FA, $84
        dc.w (addr)&$FFFF
        dc.l val
        endm

fa_add_obj_b macro ofs,val
        dc.b $FA, $41
        dc.w ofs, val
        endm

fa_add_obj_w macro ofs,val
        dc.b $FA, $42
        dc.w ofs, val
        endm

fa_add_obj_l macro ofs,val
        dc.b $FA, $44
        dc.w ofs
        dc.l val
        endm

fa_sub_obj_b macro ofs,val
        dc.b $FA, $C1
        dc.w ofs, val
        endm

fa_sub_obj_w macro ofs,val
        dc.b $FA, $C2
        dc.w ofs, val
        endm

fa_sub_obj_l macro ofs,val
        dc.b $FA, $C4
        dc.w ofs
        dc.l val
        endm

; $FB: вызвать процедуру proc(a1 = объект); процедура может сама сменить скрипт (a2)
fa_call macro proc
        dc.b $FB, 0
        dc.l proc
        endm

; $FC 00: gosub (адрес возврата в $38(obj))
fa_gosub macro target
        dc.b $FC, 0
        dc.l target
        endm

; $FC $80: return из fa_gosub
fa_return macro
        dc.b $FC, $80
        endm

; $FD: goto target, если |jim_x - x| <= n (n = $FF - 320 пикселей)
fa_if_jim_near_x macro n,target
        dc.b $FD, n
        dc.l target
        endm

; $FE: goto target, если |jim_y - y| <= n
fa_if_jim_near_y macro n,target
        dc.b $FE, n
        dc.l target
        endm
