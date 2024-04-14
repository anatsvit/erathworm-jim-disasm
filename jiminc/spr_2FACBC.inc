byte_2FACBC:    dc.b   0,  1,$7A,$7A,$87,$87,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E50   o
                dc.w sprite_24_16
                dc.w $7878
                dc.w $9500 ! ((grp_16AC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16AC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16AC80 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_8
                dc.w $7888
                dc.w $9500 ! ((grp_DEF40 / 2) & $00FF)
                dc.w $9600 ! (((grp_DEF40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DEF40 / 2) >> 16)
                dc.w 2
