; Экран лицензии, write_text с x=0, y=4. Строки центрированы на 40 тайлов:
; перед строкой x += отступ, после неё x -= (отступ + длина), т.е. возврат в 0
license_text:
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "EARTHWORM JIM"
                dc.b TXT_MOVE_X, -26, TXT_MOVE_Y, 1, TXT_MOVE_Y, 2, TXT_MOVE_X, 7
                dc.b "AND ALL RELATED CHARACTERS"
                dc.b TXT_MOVE_X, -33, TXT_MOVE_Y, 1, TXT_MOVE_X, 6
                dc.b "ARE REGISTERED TRADEMARKS OF"
                dc.b TXT_MOVE_X, -34, TXT_MOVE_Y, 1, TXT_MOVE_X, 7
                dc.b "SHINY ENTERTAINMENT, INC."
                dc.b TXT_MOVE_X, -32, TXT_MOVE_Y, 1, TXT_MOVE_Y, 1, TXT_MOVE_X, 5
                dc.b "(C) 1994 - ALL RIGHTS RESERVED"
                dc.b TXT_MOVE_X, -35, TXT_MOVE_Y, 1, TXT_MOVE_X, 0
                dc.b "PLAYMATES INTERACTIVE ENTERTAINMENT, INC"
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1, TXT_MOVE_Y, 2, TXT_MOVE_X, 3
                dc.b "LICENSED BY SEGA ENTERPRISES, LTD."
                dc.b TXT_MOVE_X, -37, TXT_MOVE_Y, 1, TXT_END
