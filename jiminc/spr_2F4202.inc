byte_2F4202:    dc.b   0,  0,$7C,$7B,$85,$85,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_28F4   o
                dc.w sprite_16_16
                dc.w $7A79
                dc.w $9500 ! ((grp_8DB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8DB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8DB80 / 2) >> 16)
                dc.w 4
