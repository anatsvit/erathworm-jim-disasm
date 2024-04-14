byte_2F8118:    dc.b   0,  0,$7B,$89,$84,$91,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2C28   o
                dc.w sprite_8_8
                dc.w $7C8C
                dc.w $9500 ! ((grp_F5A60 / 2) & $00FF)
                dc.w $9600 ! (((grp_F5A60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F5A60 / 2) >> 16)
                dc.w 1
