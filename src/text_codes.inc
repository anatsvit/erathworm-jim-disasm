; ------------- text control codes -------------
; Управляющие байты (< $20) в строках write_text / sub_24C710 (fun_texts).
; Обработчики: funchar_control_codes_table -> txtcode_XX_*

TXT_END         equ $00 ; Конец строки
TXT_MOVE_X      equ $01 ; +1 байт: x += signed byte
TXT_MOVE_Y      equ $02 ; +1 байт: y += signed byte
TXT_REPEAT_H    equ $03 ; +2 байта: n, char - повторить символ n раз по горизонтали
TXT_REPEAT_V    equ $04 ; +2 байта: n, char - повторить символ n раз по вертикали
TXT_FILL_RECT   equ $05 ; +3 байта: w, h, char - залить прямоугольник символом
TXT_WAIT        equ $06 ; +1 байт: n - пауза на n кадров (прерывается skip_requested)
TXT_NEWLINE     equ $07 ; y++, x = 0
TXT_PAL0        equ $08 ; font_params = $0000
TXT_PAL1        equ $09 ; font_params = $2000
TXT_PAL2        equ $0A ; font_params = $4000
TXT_PAL3        equ $0B ; font_params = $6000
TXT_SET_MOTION  equ $0C ; +3 байта: адрес скрипта движения букв (a4), см. txt_motion
TXT_NOP         equ $0D ; Ничего не делает
TXT_CLS         equ $0E ; Затемнение палитр, очистка plane A, палитра word_1B88A2 в линию 3
TXT_SPAWN_OBJ   equ $0F ; +8 байт: dc.l struct, dc.w x, dc.w y - создать объект

; TXT_SET_MOTION + 24-битный адрес скрипта движения (fmove_*)
txt_motion macro addr
        dc.b TXT_SET_MOTION, ((addr)>>16)&$FF, ((addr)>>8)&$FF, (addr)&$FF
        endm
