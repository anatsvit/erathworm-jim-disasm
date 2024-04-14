byte_2FC9FA:    dc.b   0,  0,$7A,$7B,$85,$83,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_3184   o
                dc.w sprite_16_16
                dc.w $7879
                dc.w $9500 ! ((grp_93B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_93B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93B80 / 2) >> 16)
                dc.w 4
