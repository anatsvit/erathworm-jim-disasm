byte_2FB292:    dc.b   0,  2,$6F,$76,$8A,$85,$7C,$7D,$7D,$7D
                                        ; DATA XREF: ROM:off_2F4C   o
                dc.w sprite_24_16
                dc.w $6D74
                dc.w $9500 ! ((grp_16B100 / 2) & $00FF)
                dc.w $9600 ! (((grp_16B100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16B100 / 2) >> 16)
                dc.w 6
                dc.w sprite_24_8
                dc.w $7584
                dc.w $9500 ! ((grp_190960 / 2) & $00FF)
                dc.w $9600 ! (((grp_190960 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_190960 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $857C
                dc.w $9500 ! ((grp_F77A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F77A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F77A0 / 2) >> 16)
                dc.w 1
