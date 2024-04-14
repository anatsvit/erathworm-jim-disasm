byte_2FCBF4:    dc.b   0,  0,$7B,$7C,$84,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_31E0   o
                dc.w sprite_16_16
                dc.w $797A
                dc.w $9500 ! ((grp_94380 / 2) & $00FF)
                dc.w $9600 ! (((grp_94380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_94380 / 2) >> 16)
                dc.w 4
