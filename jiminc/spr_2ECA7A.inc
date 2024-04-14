byte_2ECA7A:    dc.b   0,  0,$78,$7A,$88,$87,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_21A4   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_88180 / 2) & $00FF)
                dc.w $9600 ! (((grp_88180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88180 / 2) >> 16)
                dc.w 4
