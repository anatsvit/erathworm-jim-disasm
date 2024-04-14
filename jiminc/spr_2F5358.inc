byte_2F5358:    dc.b   0,  1,$5D,$9A,$64,$A6,$60,$A0,$61,$A0
                                        ; DATA XREF: ROM:off_2A60   o
                dc.w sprite_16_8
                dc.w $5B99
                dc.w $9500 ! ((grp_DC900 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC900 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $5BA1
                dc.w $9500 ! ((grp_F4620 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4620 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4620 / 2) >> 16)
                dc.w 1
