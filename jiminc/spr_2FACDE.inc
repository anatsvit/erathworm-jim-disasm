byte_2FACDE:    dc.b   0,  0,$7C,$7B,$86,$86,$81,$80,$82,$80
                                        ; DATA XREF: ROM:off_2E54   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_91880 / 2) & $00FF)
                dc.w $9600 ! (((grp_91880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91880 / 2) >> 16)
                dc.w 4
