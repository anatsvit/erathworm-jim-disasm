byte_2FEB3A:    dc.b   0,  0,$7C,$84,$82,$8D,$7F,$88,$80,$88
                                        ; DATA XREF: ROM:off_3494   o
                dc.w sprite_16_16
                dc.w $7682
                dc.w $9500 ! ((grp_96000 / 2) & $00FF)
                dc.w $9600 ! (((grp_96000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_96000 / 2) >> 16)
                dc.w 4
