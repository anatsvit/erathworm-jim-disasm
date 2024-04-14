byte_2CD8AA:    dc.b   0,  1,$84,$86,$8F,$8C,$84,$8E,$81,$A0
                                        ; DATA XREF: ROM:off_92C   o
                dc.w sprite_16_8
                dc.w $8187
                dc.w $9500 ! ((grp_C7DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7DC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $897F
                dc.w $9500 ! ((grp_E1F40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1F40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1F40 / 2) >> 16)
                dc.w 1
