byte_2FBF30:    dc.b   0,  0,$7A,$7C,$85,$86,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_3050   o
                dc.w sprite_16_16
                dc.w $787A
                dc.w $9500 ! ((grp_92500 / 2) & $00FF)
                dc.w $9600 ! (((grp_92500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92500 / 2) >> 16)
                dc.w 4
