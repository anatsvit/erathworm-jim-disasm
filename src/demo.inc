; ------------- Demo (attract mode) macros -------------
; Демо-записи jiminc/demo_table.inc, переведены утилитой demo_to_macros.py.
; Состояние джойпада (joypad_state) хранится инверсно: 0 в бите = кнопка нажата.

PAD_NONE equ 0
PAD_U    equ $01
PAD_D    equ $02
PAD_L    equ $04
PAD_R    equ $08
PAD_B    equ $10
PAD_C    equ $20
PAD_A    equ $40
PAD_S    equ $80                ; Start

; запись demo_table: поток демо и уровень (selectedLevelOption)
demo_entry macro stream, level
        dc.l stream
        dc.b level, 0
        endm

; заголовок потока: 4 слова в word_FFFF90..96 (игрой не используются)
demo_start macro w0, w1, w2, w3
        dc.w w0, w1, w2, w3
        endm

; frames кадров (1..256) держать кнопки btns (PAD_* через +; PAD_NONE - ничего не нажато)
demo_pad macro frames, btns
        dc.b (frames)-1, $FF-(btns)
        endm

; конец потока: пара с джойпадом 0 + 2 нулевых байта от рекордера
demo_end macro
        dc.b 0, 0, 0, 0
        endm
