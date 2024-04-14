byte_2FD044:    dc.b   0,  1,$75,$77,$7F,$8F,$7A,$83,$7B,$83
                                        ; DATA XREF: ROM:off_3288   o
                dc.w sprite_16_24
                dc.w $7371
                dc.w $9500 ! ((grp_1825C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1825C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1825C0 / 2) >> 16)
                dc.w 6
                dc.w sprite_32_8
                dc.w $7189
                dc.w $9500 ! ((grp_A1900 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1900 / 2) >> 16)
                dc.w 4
