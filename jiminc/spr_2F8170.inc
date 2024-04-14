byte_2F8170:    dc.b   0,  0,$7C,$8A,$83,$8F,$80,$8C,$81,$8C
                                        ; DATA XREF: ROM:off_2C38   o
                dc.w sprite_8_8
                dc.w $7C8B
                dc.w $9500 ! ((grp_F5AE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5AE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5AE0 / 2) >> 16)
                dc.w 1
