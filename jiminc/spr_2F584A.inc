byte_2F584A:    dc.b   0,  0,$72,$7F,$8E,$83,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_2AE4   o
                dc.w sprite_32_8
                dc.w $707D
                dc.w $9500 ! ((grp_9F480 / 2) & $00FF)
                dc.w $9600 ! (((grp_9F480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9F480 / 2) >> 16)
                dc.w 4
