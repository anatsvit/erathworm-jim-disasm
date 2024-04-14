byte_2EC96C:    dc.b   0,  0,$7B,$7A,$85,$8A,$80,$81,$81,$81
                                        ; DATA XREF: ROM:off_2180   o
                dc.w sprite_16_16
                dc.w $7B7A
                dc.w $9500 ! ((grp_88080 / 2) & $00FF)
                dc.w $9600 ! (((grp_88080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88080 / 2) >> 16)
                dc.w 4
