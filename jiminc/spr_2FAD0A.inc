byte_2FAD0A:    dc.b   0,  0,$7D,$7D,$84,$84,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2E5C   o
                dc.w sprite_16_16
                dc.w $7B7B
                dc.w $9500 ! ((grp_91980 / 2) & $00FF)
                dc.w $9600 ! (((grp_91980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91980 / 2) >> 16)
                dc.w 4
