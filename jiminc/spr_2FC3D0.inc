byte_2FC3D0:    dc.b   0,  0,$5E,$80,$71,$88,$67,$84,$68,$84
                                        ; DATA XREF: ROM:off_3100   o
                dc.w sprite_24_16
                dc.w $5C7E
                dc.w $9500 ! ((grp_16C000 / 2) & $00FF)
                dc.w $9600 ! (((grp_16C000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16C000 / 2) >> 16)
                dc.w 6
