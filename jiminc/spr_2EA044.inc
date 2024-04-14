byte_2EA044:    dc.b   0,  2,$74,$83,$8C,$8E,$82,$82,$83,$82
                                        ; DATA XREF: ROM:off_1EF8   o
                dc.w sprite_16_32
                dc.w $7F74
                dc.w $9500 ! ((grp_67300 / 2) & $00FF)
                dc.w $9600 ! (((grp_67300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_67300 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_24
                dc.w $6F7A
                dc.w $9500 ! ((grp_17A340 / 2) & $00FF)
                dc.w $9600 ! (((grp_17A340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_17A340 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $8F81
                dc.w $9500 ! ((grp_BDA40 / 2) & $00FF)
                dc.w $9600 ! (((grp_BDA40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BDA40 / 2) >> 16)
                dc.w 2
