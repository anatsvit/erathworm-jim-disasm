byte_2CC54C:    dc.b   0,  0,$7D,$73,$83,$87,$80,$7D,$81,$7D
                                        ; DATA XREF: ROM:off_780   o
                dc.w sprite_16_24
                dc.w $7972
                dc.w $9500 ! ((grp_16F3C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F3C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F3C0 / 2) >> 16)
                dc.w 6
