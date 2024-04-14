byte_2DADE8:    dc.b   0,  1,$6C,$80,$95,$8C,$80,$86,$73,$84
                                        ; DATA XREF: ROM:off_1510   o
                dc.w sprite_32_16
                dc.w $6A7E
                dc.w $9500 ! ((grp_4BB00 / 2) & $00FF)
                dc.w $9600 ! (((grp_4BB00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4BB00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $8A80
                dc.w $9500 ! ((grp_7E080 / 2) & $00FF)
                dc.w $9600 ! (((grp_7E080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_7E080 / 2) >> 16)
                dc.w 4
