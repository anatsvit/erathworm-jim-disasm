byte_2CE332:    dc.b   0,  0,$84,$89,$8E,$90,$89,$8C,$8A,$8C
                                        ; DATA XREF: ROM:off_A3C   o
                dc.w sprite_16_16
                dc.w $8287
                dc.w $9500 ! ((grp_73600 / 2) & $00FF)
                dc.w $9600 ! (((grp_73600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73600 / 2) >> 16)
                dc.w 4
