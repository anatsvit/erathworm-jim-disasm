byte_2FBD4E:    dc.b   0,  0,$7D,$80,$83,$85,$80,$82,$81,$82
                                        ; DATA XREF: ROM:off_300C   o
                dc.w sprite_16_16
                dc.w $777E
                dc.w $9500 ! ((grp_92380 / 2) & $00FF)
                dc.w $9600 ! (((grp_92380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92380 / 2) >> 16)
                dc.w 4
