byte_2CFCFE:    dc.b   0,  0,$7B,$7D,$83,$85,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_C44   o
                dc.w sprite_16_16
                dc.w $797B
                dc.w $9500 ! ((grp_75400 / 2) & $00FF)
                dc.w $9600 ! (((grp_75400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_75400 / 2) >> 16)
                dc.w 4
