byte_2FB6C4:    dc.b   0,  3,$77,$62,$84,$8D,$7D,$77,$7E,$77
                                        ; DATA XREF: ROM:off_2F88   o
                dc.w sprite_24_16
                dc.w $7480
                dc.w $9500 ! ((grp_16BAC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BAC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BAC0 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_16
                dc.w $7460
                dc.w $9500 ! ((grp_92A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_92A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92A00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7478
                dc.w $9500 ! ((grp_DF600 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF600 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7470
                dc.w $9500 ! ((grp_F7D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7D00 / 2) >> 16)
                dc.w 1
