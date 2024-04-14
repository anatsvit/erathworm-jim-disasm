byte_2F3AEA:    dc.b   0,  0,$8E,$7F,$97,$84,$92,$81,$93,$81
                                        ; DATA XREF: ROM:off_27F4   o
                dc.w sprite_16_16
                dc.w $757D
                dc.w $9500 ! ((grp_8E200 / 2) & $00FF)
                dc.w $9600 ! (((grp_8E200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8E200 / 2) >> 16)
                dc.w 4
