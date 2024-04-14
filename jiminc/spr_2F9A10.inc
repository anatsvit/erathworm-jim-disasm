byte_2F9A10:    dc.b   0,  1,$66,$8C,$9A,$8E,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2DB0   o
                dc.w sprite_32_8
                dc.w $7D8A
                dc.w $9500 ! ((grp_A0180 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0180 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0180 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $658A
                dc.w $9500 ! ((grp_1903C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1903C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1903C0 / 2) >> 16)
                dc.w 3
