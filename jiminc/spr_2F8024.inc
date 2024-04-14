byte_2F8024:    dc.b   0,  1,$7D,$79,$88,$86,$82,$7F,$83,$7F
                                        ; DATA XREF: ROM:00002C00   o
                dc.w sprite_16_8
                dc.w $7D81
                dc.w $9500 ! ((grp_DD640 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD640 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8079
                dc.w $9500 ! ((grp_F59E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F59E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F59E0 / 2) >> 16)
                dc.w 1
