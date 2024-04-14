byte_2CD168:    dc.b   0,  1,$6F,$72,$90,$8D,$80,$80,$7F,$80
                                        ; DATA XREF: ROM:off_880   o
                dc.w sprite_32_32
                dc.w $7370
                dc.w $9500 ! ((grp_10C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_10C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_10C00 / 2) >> 16)
                dc.w $10
                dc.w sprite_8_24
                dc.w $6B73
                dc.w $9500 ! ((grp_191E60 / 2) & $00FF)
                dc.w $9600 ! (((grp_191E60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_191E60 / 2) >> 16)
                dc.w 3
