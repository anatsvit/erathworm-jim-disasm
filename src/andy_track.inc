; ------------- Andy Asteroids track macros -------------
; Трасса уровня Andy Asteroids (andy_track_1..7, andy_track_finale) - последовательность слов,
; читается andy_level_update через andy_track_ptr по одному слову на каждые $80 andy_track_subpos.
; Слово 0 или >= $10 - сегмент туннеля: смещение строки в andy_map (17 символов на строку,
; столбец = угол (столбец+8)*$400; 'A' астероид, 'O' пузырь, 'T' пузырь ускорения,
; 'S' супер-пузырь, 'P' путь Psy-Crow). Слова 1..$F - команды.
; Трассы переведены в макросы утилитой andy_track_to_macros.py.

; сегмент туннеля: row - номер строки andy_map
atr_seg macro row
        dc.w (row)*17
        endm

; 1: goto
atr_goto macro target
        dc.w 1, target
        endm

; 2: вызов подпрограммы трассы, адрес возврата в andy_track_stack
atr_call macro target
        dc.w 2, target
        endm

; 3: возврат из подпрограммы трассы
atr_ret macro
        dc.w 3
        endm

; 6: смена палитры туннеля: n*32 в andy_tunnel_palettes, плавно через tunnel_pal_fade_timer
atr_pal macro n
        dc.w 6, n
        endm

; 8: финиш, подсчёт andy_asteroids_race_result
atr_finish macro
        dc.w 8
        endm

; 9: Psy-Crow (obj_01) получает скрипт byte_1A4542
atr_psycrow_script macro
        dc.w 9
        endm

; $A: появляется планета (object_planet)
atr_planet macro
        dc.w $A
        endm
