byte_2CE14C:    dc.b   0,  2,$8C,$7C,$A4,$8F,$98,$85,$99,$85
                                        ; DATA XREF: ROM:off_A00   o
                dc.w sprite_16_16
                dc.w $977A
                dc.w $9500 ! ((grp_74180 / 2) & $00FF)
                dc.w $9600 ! (((grp_74180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_74180 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $8D8A
                dc.w $9500 ! ((grp_183700 / 2) & $00FF)
                dc.w $9600 ! (((grp_183700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183700 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $8F82
                dc.w $9500 ! ((grp_E2020 / 2) & $00FF)
                dc.w $9600 ! (((grp_E2020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E2020 / 2) >> 16)
                dc.w 1
