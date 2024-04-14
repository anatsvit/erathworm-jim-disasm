byte_2FE76C:    dc.b   0,  1,$7B,$7E,$82,$93,$7F,$8A,$80,$8A
                                        ; DATA XREF: ROM:00003420   o
                dc.w sprite_8_32
                dc.w $7A7C
                dc.w $9500 ! ((grp_AF200 / 2) & $00FF)
                dc.w $9600 ! (((grp_AF200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AF200 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $827C
                dc.w $9500 ! ((grp_F8CA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8CA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8CA0 / 2) >> 16)
                dc.w 1
