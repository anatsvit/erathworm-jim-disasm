byte_2FCB18:    dc.b   0,  0,$7D,$7A,$82,$85,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_31B8   o
                dc.w sprite_16_16
                dc.w $7578
                dc.w $9500 ! ((grp_94200 / 2) & $00FF)
                dc.w $9600 ! (((grp_94200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94200 / 2) >> 16)
                dc.w 4
