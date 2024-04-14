byte_2FCB02:    dc.b   0,  0,$7B,$7A,$83,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31B4   o
                dc.w sprite_16_16
                dc.w $7978
                dc.w $9500 ! ((grp_94180 / 2) & $00FF)
                dc.w $9600 ! (((grp_94180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94180 / 2) >> 16)
                dc.w 4
