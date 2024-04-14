byte_2F53FE:    dc.b   0,  0,$5E,$A5,$5F,$A8,$5E,$A6,$5F,$A6
                                        ; DATA XREF: ROM:off_2A7C   o
                dc.w sprite_8_8
                dc.w $5AA3
                dc.w $9500 ! ((grp_F4660 / 2) & $00FF)
                dc.w $9600 ! (((grp_F4660 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F4660 / 2) >> 16)
                dc.w 1
