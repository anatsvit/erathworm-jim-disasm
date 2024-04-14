byte_2F3C4A:    dc.b   0,  0,$8F,$81,$8E,$7F,$8E,$80,$8F,$80
                                        ; DATA XREF: ROM:off_2834   o
                dc.w sprite_8_8
                dc.w $7A7F
                dc.w $9500 ! ((grp_F3DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3DC0 / 2) >> 16)
                dc.w 1
