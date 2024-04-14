byte_2CE374:    dc.b   0,  1,$85,$88,$8E,$8D,$89,$8A,$8A,$8A
                                        ; DATA XREF: ROM:off_A48   o
                dc.w sprite_8_16
                dc.w $8386
                dc.w $9500 ! ((grp_B0380 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0380 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8B88
                dc.w $9500 ! ((grp_E1940 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1940 / 2) >> 16)
                dc.w 1
