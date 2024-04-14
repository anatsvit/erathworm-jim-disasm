byte_2FCF56:    dc.b   0,  0,$8B,$65,$99,$71,$92,$6B,$93,$6B
                                        ; DATA XREF: ROM:off_326C   o
                dc.w sprite_24_16
                dc.w $8963
                dc.w $9500 ! ((grp_16CF00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CF00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CF00 / 2) >> 16)
                dc.w 6
