byte_2EF130:    dc.b   0,  1,$7D,$7E,$84,$83,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2478   o
                dc.w sprite_16_8
                dc.w $7B7C
                dc.w $9500 ! ((grp_D9740 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9740 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9740 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8384
                dc.w $9500 ! ((grp_F0D60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D60 / 2) >> 16)
                dc.w 1
