byte_2FB20C:    dc.b   0,  0,$78,$7B,$85,$81,$7E,$7E,$7F,$7E
                                        ; DATA XREF: ROM:off_2F38   o
                dc.w sprite_24_16
                dc.w $7679
                dc.w $9500 ! ((grp_16AD40 / 2) & $00FF)
                dc.w $9600 ! (((grp_16AD40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16AD40 / 2) >> 16)
                dc.w 6
