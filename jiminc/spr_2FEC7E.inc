byte_2FEC7E:    dc.b   0,  1,$7B,$7F,$85,$8D,$81,$81,$82,$81
                                        ; DATA XREF: ROM:off_34C4   o
                dc.w sprite_16_24
                dc.w $797B
                dc.w $9500 ! ((grp_182C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_182C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_182C80 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_8
                dc.w $7E73
                dc.w $9500 ! ((grp_E08C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E08C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E08C0 / 2) >> 16)
                dc.w 2
