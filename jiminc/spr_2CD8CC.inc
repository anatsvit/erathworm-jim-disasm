byte_2CD8CC:    dc.b   0,  1,$84,$85,$8F,$8D,$84,$8E,$81,$A0
                                        ; DATA XREF: ROM:off_930   o
                dc.w sprite_16_8
                dc.w $8088
                dc.w $9500 ! ((grp_C7E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7E00 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $8580
                dc.w $9500 ! ((grp_C7E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7E40 / 2) >> 16)
                dc.w 2
