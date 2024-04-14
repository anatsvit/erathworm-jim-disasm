byte_2D0578:    dc.b   0,  1,$7D,$7D,$82,$85,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_D38   o
                dc.w sprite_16_8
                dc.w $7B7B
                dc.w $9500 ! ((grp_C8D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C8D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C8D00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7D83
                dc.w $9500 ! ((grp_E3440 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3440 / 2) >> 16)
                dc.w 1
