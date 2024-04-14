byte_2F8FFA:    dc.b   0,  1,$6F,$71,$90,$85,$79,$70,$7A,$70
                                        ; DATA XREF: ROM:off_2CF4   o
                dc.w sprite_8_8
                dc.w $7971
                dc.w $9500 ! ((grp_F6480 / 2) & $00FF)
                dc.w $9600 ! (((grp_F6480 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F6480 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $7B70
                dc.w $9500 ! ((grp_F64A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F64A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F64A0 / 2) >> 16)
                dc.w 1
