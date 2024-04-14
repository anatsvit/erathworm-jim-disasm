byte_2FCC36:    dc.b   0,  0,$7B,$7A,$85,$84,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_31EC   o
                dc.w sprite_16_16
                dc.w $7978
                dc.w $9500 ! ((grp_94500 / 2) & $00FF)
                dc.w $9600 ! (((grp_94500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94500 / 2) >> 16)
                dc.w 4
