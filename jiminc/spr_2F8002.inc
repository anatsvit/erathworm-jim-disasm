byte_2F8002:    dc.b   0,  1,$7C,$77,$88,$84,$82,$7E,$83,$7E
                                        ; DATA XREF: ROM:00002BFC   o
                dc.w sprite_16_8
                dc.w $7D80
                dc.w $9500 ! ((grp_DD600 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD600 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8078
                dc.w $9500 ! ((grp_F59C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F59C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F59C0 / 2) >> 16)
                dc.w 1
