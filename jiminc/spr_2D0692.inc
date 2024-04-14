byte_2D0692:    dc.b   0,  2,$8A,$6F,$98,$86,$91,$7A,$92,$7A
                                        ; DATA XREF: ROM:off_D5C   o
                dc.w sprite_8_32
                dc.w $8B6B
                dc.w $9500 ! ((grp_A3800 / 2) & $00FF)
                dc.w $9600 ! (((grp_A3800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A3800 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_24
                dc.w $936D
                dc.w $9500 ! ((grp_192DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_192DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192DC0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $8380
                dc.w $9500 ! ((grp_E3500 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3500 / 2) >> 16)
                dc.w 1
