byte_2CE3C2:    dc.b   0,  1,$87,$86,$92,$8A,$8C,$88,$8D,$88
                                        ; DATA XREF: ROM:off_A54   o
                dc.w sprite_16_8
                dc.w $8584
                dc.w $9500 ! ((grp_C7440 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7440 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $878C
                dc.w $9500 ! ((grp_E1980 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1980 / 2) >> 16)
                dc.w 1
