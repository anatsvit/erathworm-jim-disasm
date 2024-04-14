byte_2CC4B0:    dc.b   0,  2,$82,$82,$91,$95,$8B,$8A,$88,$89
                                        ; DATA XREF: ROM:off_768   o
                dc.w sprite_16_16
                dc.w $8080
                dc.w $9500 ! ((grp_72A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_72A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72A00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $8490
                dc.w $9500 ! ((grp_C6B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6B00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $9084
                dc.w $9500 ! ((grp_E1260 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1260 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1260 / 2) >> 16)
                dc.w 1
