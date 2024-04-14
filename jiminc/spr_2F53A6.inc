byte_2F53A6:    dc.b   0,  0,$61,$A1,$65,$A2,$63,$A1,$64,$A1
                                        ; DATA XREF: ROM:off_2A6C   o
                dc.w sprite_16_8
                dc.w $5B9F
                dc.w $9500 ! ((grp_DC9C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DC9C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DC9C0 / 2) >> 16)
                dc.w 2
