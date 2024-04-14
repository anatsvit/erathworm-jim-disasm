byte_2FEB0E:    dc.b   0,  0,$7F,$8A,$81,$8D,$80,$8B,$81,$8B
                                        ; DATA XREF: ROM:off_348C   o
                dc.w sprite_8_8
                dc.w $7C88
                dc.w $9500 ! ((grp_F8FE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8FE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8FE0 / 2) >> 16)
                dc.w 1
