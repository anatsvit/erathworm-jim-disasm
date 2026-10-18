; ------------- move script macros -------------
; Скрипты движения объектов ($A(obj)), интерпретатор update_objects_motion.
; Каждый кадр: читается пара fm_step dx,dy (signed, y растёт вниз),
; затем выполняются все команды ($80..$94) до следующей пары.
; Команда = индекс в obj_script_cmd_table (база $80; у анимаций та же таблица с базой $EA).

; условия для fm_if_* (биты 4-6 второго байта $8A)
FM_GT           equ $40 ; переход, если [addr] > val (беззнаково); $00 - то же
FM_EQ           equ $10 ; переход, если [addr] == val
FM_NE           equ $20 ; переход, если [addr] != val
FM_LE           equ $30 ; переход, если [addr] <= val (беззнаково)
; размер сравнения (биты 0-2)
FM_SIZE_B       equ 1
FM_SIZE_W       equ 2
FM_SIZE_L       equ 4

; кадр движения: x += dx, y += dy
fm_step macro dx,dy
        dc.b dx, dy
        endm

; $80: goto
fm_goto macro target
        dc.b $80, 0
        dc.l target
        endm

; $82 00: конец скрипта движения (clr.l $A(obj))
fm_end macro
        dc.b $82, 0
        endm

; $83: записать word в поле объекта: obj+ofs = val
fm_set_obj_w macro ofs,val
        dc.b $83, $10|FM_SIZE_W
        dc.w ofs, val
        endm

; $83: записать long в поле объекта: obj+ofs = val
fm_set_obj_l macro ofs,val
        dc.b $83, $10|FM_SIZE_L
        dc.w ofs
        dc.l val
        endm

; $84 $8n: следующая пара fm_step выполняется ещё n кадров
fm_hold macro n
        dc.b $84, $80|(n)
        endm

; $84 n: начало цикла, тело до fm_next выполняется n+1 раз
fm_loop macro n
        dc.b $84, n
        endm

; $85 00: конец тела цикла fm_loop
fm_next macro
        dc.b $85, 0
        endm

; $86: goto target с вероятностью p/256
fm_rand_goto macro p,target
        dc.b $86, p
        dc.l target
        endm

; $8A: if word RAM[addr] <cond> val -> goto target
fm_if_w macro cond,addr,val,target
        dc.b $8A, (cond)|FM_SIZE_W
        dc.w (addr)&$FFFF, val
        dc.l target
        endm

; $8A: if long RAM[addr] <cond> val -> goto target
fm_if_l macro cond,addr,val,target
        dc.b $8A, (cond)|FM_SIZE_L
        dc.w (addr)&$FFFF
        dc.l val, target
        endm

; $8C 00: удалить объект
fm_delete macro
        dc.b $8C, 0
        endm

; $91: вызвать процедуру proc(a1 = объект)
fm_call macro proc
        dc.b $91, 0
        dc.l proc
        endm

; $92 00: gosub (адрес возврата в $4C(obj))
fm_gosub macro target
        dc.b $92, 0
        dc.l target
        endm

; $92 $80: return из fm_gosub
fm_return macro
        dc.b $92, $80
        endm
