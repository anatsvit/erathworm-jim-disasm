byte_2FCBDE:    dc.b   0,  0,$79,$7C,$85,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_31DC   o
                dc.w sprite_24_16
                dc.w $737A
                dc.w $9500 ! ((grp_16CD80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CD80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CD80 / 2) >> 16)
                dc.w 6
