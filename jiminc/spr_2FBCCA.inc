byte_2FBCCA:    dc.b   0,  0,$79,$7D,$83,$86,$7E,$81,$7F,$81
                                        ; DATA XREF: ROM:off_2FF4   o
                dc.w sprite_16_16
                dc.w $777B
                dc.w $9500 ! ((grp_92080 / 2) & $00FF)
                dc.w $9600 ! (((grp_92080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92080 / 2) >> 16)
                dc.w 4
