byte_2F3B00:    dc.b   0,  0,$8F,$80,$96,$84,$92,$82,$93,$82
                                        ; DATA XREF: ROM:off_27F8   o
                dc.w sprite_16_16
                dc.w $767E
                dc.w $9500 ! ((grp_8E280 / 2) & $00FF)
                dc.w $9600 ! (((grp_8E280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8E280 / 2) >> 16)
                dc.w 4
