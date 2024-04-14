byte_2FC408:    dc.b   0,  0,$5D,$80,$70,$87,$66,$83,$67,$83
                                        ; DATA XREF: ROM:off_3108   o
                dc.w sprite_24_16
                dc.w $5B7E
                dc.w $9500 ! ((grp_16C0C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16C0C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16C0C0 / 2) >> 16)
                dc.w 6
