byte_2FAC40:    dc.b   0,  2,$73,$73,$8F,$8F,$81,$81,$82,$81
                                        ; DATA XREF: ROM:off_2E40   o
                dc.w sprite_32_32
                dc.w $6F72
                dc.w $9500 ! ((grp_42C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_42C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_42C00 / 2) >> 16)
                dc.w $10
                dc.w sprite_8_24
                dc.w $8F73
                dc.w $9500 ! ((grp_19FC60 / 2) & $00FF)
                dc.w $9600 ! (((grp_19FC60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_19FC60 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $776A
                dc.w $9500 ! ((grp_DEF00 / 2) & $00FF)
                dc.w $9600 ! (((grp_DEF00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DEF00 / 2) >> 16)
                dc.w 2
