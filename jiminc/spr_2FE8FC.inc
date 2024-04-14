byte_2FE8FC:    dc.b   0,  2,$67,$8A,$9D,$90,$7F,$8C,$80,$8C
                                        ; DATA XREF: ROM:off_3448   o
                dc.w sprite_32_8
                dc.w $608B
                dc.w $9500 ! ((grp_A1A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1A80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $808B
                dc.w $9500 ! ((grp_A1A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1A00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8383
                dc.w $9500 ! ((grp_F8DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8DC0 / 2) >> 16)
                dc.w 1
