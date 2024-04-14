byte_2ECABC:    dc.b   0,  0,$79,$7A,$87,$89,$80,$82,$81,$82
                                        ; DATA XREF: ROM:off_21B0   o
                dc.w sprite_16_16
                dc.w $7A7B
                dc.w $9500 ! ((grp_88300 / 2) & $00FF)
                dc.w $9600 ! (((grp_88300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88300 / 2) >> 16)
                dc.w 4
