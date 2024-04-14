byte_2CFD14:    dc.b   0,  0,$7B,$7C,$83,$87,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C48   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_75480 / 2) & $00FF)
                dc.w $9600 ! (((grp_75480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75480 / 2) >> 16)
                dc.w 4
