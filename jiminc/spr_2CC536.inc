byte_2CC536:    dc.b   0,  0,$7B,$74,$84,$86,$7F,$7D,$80,$7D
                                        ; DATA XREF: ROM:off_77C   o
                dc.w sprite_16_24
                dc.w $7972
                dc.w $9500 ! ((grp_16F300 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F300 / 2) >> 16)
                dc.w 6
