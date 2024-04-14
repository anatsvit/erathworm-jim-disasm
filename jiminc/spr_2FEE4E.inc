byte_2FEE4E:    dc.b   0,  0,$80,$70,$82,$88,$81,$7C,$82,$7C
                                        ; DATA XREF: ROM:off_34FC   o
                dc.w sprite_8_32
                dc.w $7D6E
                dc.w $9500 ! ((grp_AFC80 / 2) & $00FF)
                dc.w $9600 ! (((grp_AFC80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AFC80 / 2) >> 16)
                dc.w 4
