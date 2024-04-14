byte_2ECA20:    dc.b   0,  1,$78,$7B,$87,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_2198   o
                dc.w sprite_16_8
                dc.w $787B
                dc.w $9500 ! ((grp_D80C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_D80C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D80C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8283
                dc.w $9500 ! ((grp_EFAE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFAE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFAE0 / 2) >> 16)
                dc.w 1
