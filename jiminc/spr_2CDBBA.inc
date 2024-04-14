byte_2CDBBA:    dc.b   0,  1,$78,$7B,$80,$83,$7C,$7F,$7D,$7F
                                        ; DATA XREF: ROM:off_984   o
                dc.w sprite_16_8
                dc.w $7679
                dc.w $9500 ! ((grp_C72C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C72C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C72C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7681
                dc.w $9500 ! ((grp_E1860 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1860 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1860 / 2) >> 16)
                dc.w 1
