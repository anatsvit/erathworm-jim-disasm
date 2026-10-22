; Экран чит-меню, write_text с x=0, y=3. Строки по 40 символов, после каждой x -= 40
cheat_menu_texts:
                dc.b TXT_PAL2, TXT_MOVE_X, 13
                dc.b "EARTHWORM JIM #"
                dc.b TXT_MOVE_X, -28, TXT_MOVE_Y, 4, TXT_PAL0, TXT_MOVE_X, 3
                dc.b "(C)1994 SHINY ENTERTAINMENT, INC."
                dc.b TXT_MOVE_X, -36, TXT_MOVE_Y, 1, TXT_MOVE_X, 10
                dc.b "ALL RIGHTS RESERVED"
                dc.b TXT_MOVE_X, -29, TXT_MOVE_Y, 1, TXT_PAL1, TXT_MOVE_X, 4
                dc.b "DAVID PERRY'S PRIVATE CHEAT MODE"
                dc.b TXT_MOVE_X, -36, TXT_MOVE_Y, 1, TXT_MOVE_Y, 1, TXT_PAL0
                dc.b "         RAM BYTES USED : 00000         "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "         RAM BYTES FREE : 00000         "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "         ROM BYTES USED : 0000000       "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "         ROM BYTES FREE : 0000000       "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 2
                dc.b "  MUSIC & SOUND FX USES : 000000        "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "    WORD ADDRESSES LEFT : 00000         "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "  ROOM FOR SPRTLIST.68K : 00000         "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "  MAX TILES TO MAKE MAP : 0000          "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 2
                dc.b "         CHEAT MODE :                   "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "     START ON LEVEL :                   "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "      FREEZEABILITY :                   "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 1
                dc.b "      MAP VIEW MODE :                   "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, 2
                dc.b "        PRESS THE '", TXT_PAL3, "START", TXT_PAL0, "' BUTTON        "
                dc.b TXT_MOVE_X, -40, TXT_MOVE_Y, -21, TXT_PAL3 ; обратно наверх, в строку 3
                dc.b "          TUE 2ND. AUGUST 1994", TXT_END
