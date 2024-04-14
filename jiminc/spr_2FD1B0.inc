byte_2FD1B0:    dc.b   0,  0,$7B,$7B,$84,$86,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_32B0   o
                dc.w sprite_16_16
                dc.w $7879
                dc.w $9500 ! ((grp_94E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_94E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94E00 / 2) >> 16)
                dc.w 4
