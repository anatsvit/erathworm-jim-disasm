byte_2FB82A:    dc.b   0,  3,$74,$62,$84,$8D,$7C,$77,$7D,$77
                                        ; DATA XREF: ROM:off_2FA4   o
                dc.w sprite_8_32
                dc.w $7770
                dc.w $9500 ! ((grp_AEA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_AEA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AEA80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_24
                dc.w $7F60
                dc.w $9500 ! ((grp_1A0080 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A0080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A0080 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $6F60
                dc.w $9500 ! ((grp_DF540 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF540 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F88
                dc.w $9500 ! ((grp_F7C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7C80 / 2) >> 16)
                dc.w 1
