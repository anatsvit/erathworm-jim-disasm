byte_2D01BC:    dc.b   0,  0,$74,$86,$8A,$8F,$7F,$8A,$80,$8A
                                        ; DATA XREF: ROM:off_CE8   o
                dc.w sprite_32_16
                dc.w $6E84
                dc.w $9500 ! ((grp_46B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_46B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_46B00 / 2) >> 16)
                dc.w 8
