byte_2CD844:    dc.b   0,  2,$59,$52,$60,$57,$82,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_920   o
                dc.w sprite_8_16
                dc.w $5B4F
                dc.w $9500 ! ((grp_B0840 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0840 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $5350
                dc.w $9500 ! ((grp_E1E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1E40 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $7751
                dc.w $9500 ! ((grp_E1E60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1E60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1E60 / 2) >> 16)
                dc.w 1
