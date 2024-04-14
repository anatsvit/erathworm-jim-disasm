byte_2CFE70:    dc.b   0,  1,$7C,$7A,$82,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_C78   o
                dc.w sprite_8_24
                dc.w $7C75
                dc.w $9500 ! ((grp_192C40 / 2) & $00FF)
                dc.w $9600 ! (((grp_192C40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192C40 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $7476
                dc.w $9500 ! ((grp_E3140 / 2) & $00FF)
                dc.w $9600 ! (((grp_E3140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E3140 / 2) >> 16)
                dc.w 1
