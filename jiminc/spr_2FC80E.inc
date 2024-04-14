byte_2FC80E:    dc.b   0,  0,$74,$71,$8A,$8D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_313C   o
                dc.w sprite_32_16
                dc.w $6D6F
                dc.w $9500 ! ((grp_58800 / 2) & $00FF)
                dc.w $9600 ! (((grp_58800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_58800 / 2) >> 16)
                dc.w 8
