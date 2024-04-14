byte_2CFA8A:    dc.b   0,  1,$7B,$7D,$84,$8D,$7F,$85,$80,$85
                                        ; DATA XREF: ROM:off_BEC   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_74F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_74F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_74F80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7C8B
                dc.w $9500 ! ((grp_E2F60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2F60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2F60 / 2) >> 16)
                dc.w 1
