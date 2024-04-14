byte_2EEF6E:    dc.b   0,  0,$81,$7F,$7F,$7D,$80,$7E,$81,$7E
                                        ; DATA XREF: ROM:off_243C   o
                dc.w sprite_8_8
                dc.w $7C76
                dc.w $9500 ! ((grp_F0C40 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0C40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0C40 / 2) >> 16)
                dc.w 1
