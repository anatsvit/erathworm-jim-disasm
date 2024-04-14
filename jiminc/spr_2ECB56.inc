byte_2ECB56:    dc.b   0,  0,$78,$7B,$87,$88,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_21CC   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_88680 / 2) & $00FF)
                dc.w $9600 ! (((grp_88680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88680 / 2) >> 16)
                dc.w 4
