byte_2F3DC0:    dc.b   0,  0,$8A,$7F,$93,$84,$8E,$81,$8F,$81
                                        ; DATA XREF: ROM:off_2878   o
                dc.w sprite_16_16
                dc.w $797D
                dc.w $9500 ! ((grp_8E380 / 2) & $00FF)
                dc.w $9600 ! (((grp_8E380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8E380 / 2) >> 16)
                dc.w 4
