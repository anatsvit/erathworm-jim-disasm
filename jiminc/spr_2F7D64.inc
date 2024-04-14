byte_2F7D64:    dc.b   0,  0,$7D,$87,$80,$8D,$7E,$8A,$7F,$8A
                                        ; DATA XREF: ROM:off_2BC8   o
                dc.w sprite_8_16
                dc.w $7B85
                dc.w $9500 ! ((grp_C2200 / 2) & $00FF)
                dc.w $9600 ! (((grp_C2200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C2200 / 2) >> 16)
                dc.w 2
