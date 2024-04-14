byte_2CDA92:    dc.b   0,  0,$7B,$7D,$87,$81,$81,$7F,$82,$7F
                                        ; DATA XREF: ROM:off_964   o
                dc.w sprite_16_8
                dc.w $797B
                dc.w $9500 ! ((grp_C7200 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7200 / 2) >> 16)
                dc.w 2
