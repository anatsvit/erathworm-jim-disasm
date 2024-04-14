byte_2FC8F8:    dc.b   0,  1,$66,$75,$90,$8B,$7B,$80,$7C,$80
                                        ; DATA XREF: ROM:off_3160   o
                dc.w sprite_16_16
                dc.w $6470
                dc.w $9500 ! ((grp_93880 / 2) & $00FF)
                dc.w $9600 ! (((grp_93880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93880 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7478
                dc.w $9500 ! ((grp_A0900 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0900 / 2) >> 16)
                dc.w 4
