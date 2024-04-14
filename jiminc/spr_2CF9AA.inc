byte_2CF9AA:    dc.b   0,  1,$7D,$7A,$81,$8A,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_BCC   o
                dc.w sprite_8_24
                dc.w $7B78
                dc.w $9500 ! ((grp_192B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_192B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192B80 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $8388
                dc.w $9500 ! ((grp_E2EE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2EE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2EE0 / 2) >> 16)
                dc.w 1
