byte_2FEB7C:    dc.b   0,  0,$7A,$84,$84,$8C,$7F,$88,$80,$88
                                        ; DATA XREF: ROM:off_34A0   o
                dc.w sprite_16_16
                dc.w $7882
                dc.w $9500 ! ((grp_96180 / 2) & $00FF)
                dc.w $9600 ! (((grp_96180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96180 / 2) >> 16)
                dc.w 4
