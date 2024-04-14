byte_2F8FD8:    dc.b   0,  1,$6F,$71,$90,$85,$79,$75,$7A,$75
                                        ; DATA XREF: ROM:off_2CF0   o
                dc.w sprite_32_8
                dc.w $7772
                dc.w $9500 ! ((grp_9FD00 / 2) & $00FF)
                dc.w $9600 ! (((grp_9FD00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9FD00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $6773
                dc.w $9500 ! ((grp_DE2C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DE2C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DE2C0 / 2) >> 16)
                dc.w 2
