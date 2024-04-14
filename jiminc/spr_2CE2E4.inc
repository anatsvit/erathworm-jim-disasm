byte_2CE2E4:    dc.b   0,  0,$81,$8A,$88,$91,$84,$8D,$85,$8D
                                        ; DATA XREF: ROM:off_A30   o
                dc.w sprite_16_16
                dc.w $7F88
                dc.w $9500 ! ((grp_73580 / 2) & $00FF)
                dc.w $9600 ! (((grp_73580 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73580 / 2) >> 16)
                dc.w 4
