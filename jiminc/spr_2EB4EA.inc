byte_2EB4EA:    dc.b   0,  3,$71,$55,$8F,$8D,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_2024   o
                dc.w sprite_32_32
                dc.w $726C
                dc.w $9500 ! ((grp_2A800 / 2) & $00FF)
                dc.w $9600 ! (((grp_2A800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_2A800 / 2) >> 16)
                dc.w $10
                dc.w sprite_32_8
                dc.w $728C
                dc.w $9500 ! ((grp_9C780 / 2) & $00FF)
                dc.w $9600 ! (((grp_9C780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9C780 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $6A73
                dc.w $9500 ! ((grp_AA480 / 2) & $00FF)
                dc.w $9600 ! (((grp_AA480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AA480 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $9273
                dc.w $9500 ! ((grp_AA500 / 2) & $00FF)
                dc.w $9600 ! (((grp_AA500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AA500 / 2) >> 16)
                dc.w 4
