byte_2EFBA2:    dc.b   0,  0,$79,$7C,$86,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_256C   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_8AB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8AB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8AB80 / 2) >> 16)
                dc.w 4
