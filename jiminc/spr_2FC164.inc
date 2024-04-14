byte_2FC164:    dc.b   0,  1,$72,$8C,$7D,$9E,$77,$95,$78,$95
                                        ; DATA XREF: ROM:off_30B0   o
                dc.w sprite_8_24
                dc.w $708A
                dc.w $9500 ! ((grp_1A0260 / 2) & $00FF)
                dc.w $9600 ! (((grp_1A0260 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1A0260 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $788A
                dc.w $9500 ! ((grp_C5100 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5100 / 2) >> 16)
                dc.w 2
