byte_2D01D2:    dc.b   0,  0,$75,$86,$8B,$8F,$80,$8A,$81,$8A
                                        ; DATA XREF: ROM:off_CEC   o
                dc.w sprite_32_16
                dc.w $6F84
                dc.w $9500 ! ((grp_46B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_46B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_46B00 / 2) >> 16)
                dc.w 8
