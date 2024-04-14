byte_2F47CC:    dc.b   0,  0,$80,$7D,$82,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_29D8   o
                dc.w sprite_8_16
                dc.w $7D7B
                dc.w $9500 ! ((grp_C16C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C16C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C16C0 / 2) >> 16)
                dc.w 2
