; Финальные титры, выводятся построчно (sub_24C44A): строка очищается byte_1B727F
; и печатается через write_text до TXT_END с x=0. TXT_NEWLINE в начале строки
; цикл съедает сам - пустая строка без вызова write_text. TITLES_END - конец титров.
; TXT_PAL1 - заголовки, TXT_PAL2 - имена
end_titles:
                dc.b TXT_PAL1, TXT_MOVE_X, 13
                dc.b "EARTHWORM JIM", TXT_END
                dc.b TXT_MOVE_X, 3
                dc.b "(C) 1994 SHINY ENTERTAINMENT, INC.", TXT_END
                dc.b TXT_MOVE_X, 10
                dc.b "ALL RIGHTS RESERVED", TXT_END
                dc.b TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 16
                dc.b "PROGRAM", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 14
                dc.b "DAVID PERRY", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 9
                dc.b "ADDITIONAL PROGRAMMING", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "NICHOLAS JONES", TXT_END
                dc.b TXT_MOVE_X, 15
                dc.b "ANDY ASTOR", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 12
                dc.b "ORIGINAL CONCEPT", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 12
                dc.b "DOUGLAS TENNAPEL", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 11
                dc.b "DIRECTING ANIMATOR", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 15
                dc.b "MIKE DIETZ", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 15
                dc.b "ANIMATORS", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 12
                dc.b "DOUGLAS TENNAPEL", TXT_END
                dc.b TXT_MOVE_X, 12
                dc.b "EDWARD SCHOFIELD", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 14
                dc.b "ART DIRECTOR", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 15
                dc.b "NICK BRUTY", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 14
                dc.b "LEAD ARTIST", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 15
                dc.b "STEVE CROW", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 13
                dc.b "LEVEL DESIGNER", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 15
                dc.b "TOM TANAKA", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 13
                dc.b "INK AND PAINT", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 14
                dc.b "ERIC CICCONE", TXT_END
                dc.b TXT_MOVE_X, 14
                dc.b "MIKE PILOTTI", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 16
                dc.b "CLEAN UP", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "CLARK SORENSEN", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 12
                dc.b "ASSISTANT ARTIST", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 16
                dc.b "LIN SHEN", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 15
                dc.b "MUSIC & FX", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 14
                dc.b "MARK MILLER", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 14
                dc.b "DESIGNED BY", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 7
                dc.b "MANY, MANY SHINY MEETINGS", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 14
                dc.b "PRODUCED BY", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "DAVID LUEHMANN", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 10
                dc.b "DEVELOPMENT TOOLS BY", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 15
                dc.b "ANDY ASTOR", TXT_END
                dc.b TXT_MOVE_X, 15
                dc.b "DAN CHANG", TXT_END
                dc.b TXT_MOVE_X, 17
                dc.b "PSY-Q", TXT_END
                dc.b TXT_MOVE_X, 9
                dc.b "ROB NORTHERN COMPUTING", TXT_END
                dc.b TXT_NEWLINE, TXT_PAL1, TXT_MOVE_X, 13
                dc.b "SPECIAL THANKS", TXT_END
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "PLAYMATES TOYS", TXT_END
                dc.b TXT_MOVE_X, 13
                dc.b "RICHARD SALLIS", TXT_END
                dc.b TXT_MOVE_X, 15
                dc.b "BECKY TRAN", TXT_END
                dc.b TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TXT_NEWLINE, TITLES_END
