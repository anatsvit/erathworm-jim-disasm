byte_2FCA52:    dc.b   0,  0,$7C,$7B,$84,$84,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3194   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_93D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_93D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93D80 / 2) >> 16)
                dc.w 4
