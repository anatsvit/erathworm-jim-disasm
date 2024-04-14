byte_2FD11C:    dc.b   0,  1,$79,$79,$8B,$85,$82,$7F,$83,$7F
                                        ; DATA XREF: ROM:off_32A0   o
                dc.w sprite_16_16
                dc.w $7E77
                dc.w $9500 ! ((grp_94D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_94D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94D00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $767A
                dc.w $9500 ! ((grp_C59C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C59C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C59C0 / 2) >> 16)
                dc.w 2
