byte_2D05E8:    dc.b   0,  0,$75,$80,$7E,$89,$79,$84,$7A,$84
                                        ; DATA XREF: ROM:off_D48   o
                dc.w sprite_16_16
                dc.w $737E
                dc.w $9500 ! ((grp_75A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_75A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75A80 / 2) >> 16)
                dc.w 4
