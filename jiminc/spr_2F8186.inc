byte_2F8186:    dc.b   0,  0,$7A,$8A,$87,$90,$80,$8C,$81,$8C
                                        ; DATA XREF: ROM:off_2C3C   o
                dc.w sprite_16_8
                dc.w $7B8A
                dc.w $9500 ! ((grp_DD7C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DD7C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DD7C0 / 2) >> 16)
                dc.w 2
