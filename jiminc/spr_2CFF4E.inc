byte_2CFF4E:    dc.b   0,  1,$72,$17,$81,$28,$79,$1F,$7A,$1F
                                        ; DATA XREF: ROM:off_C9C   o
                dc.w sprite_16_24
                dc.w $7015
                dc.w $9500 ! ((grp_170BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_170BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170BC0 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $801A
                dc.w $9500 ! ((grp_B1880 / 2) & $00FF)
                dc.w $9600 ! (((grp_B1880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B1880 / 2) >> 16)
                dc.w 2
