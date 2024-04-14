byte_2CD888:    dc.b   0,  1,$83,$88,$91,$8D,$84,$8E,$82,$A1
                                        ; DATA XREF: ROM:off_928   o
                dc.w sprite_16_8
                dc.w $8089
                dc.w $9500 ! ((grp_C7D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7D40 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $8981
                dc.w $9500 ! ((grp_C7D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7D80 / 2) >> 16)
                dc.w 2
