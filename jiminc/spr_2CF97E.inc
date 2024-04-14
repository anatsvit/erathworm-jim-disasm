byte_2CF97E:    dc.b   0,  0,$80,$75,$7E,$87,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_BC4   o
                dc.w sprite_8_24
                dc.w $7E73
                dc.w $9500 ! ((grp_192AC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_192AC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192AC0 / 2) >> 16)
                dc.w 3
