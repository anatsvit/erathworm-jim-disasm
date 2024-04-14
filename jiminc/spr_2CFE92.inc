byte_2CFE92:    dc.b   0,  0,$7B,$7D,$84,$88,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_C7C   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_75880 / 2) & $00FF)
                dc.w $9600 ! (((grp_75880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75880 / 2) >> 16)
                dc.w 4
