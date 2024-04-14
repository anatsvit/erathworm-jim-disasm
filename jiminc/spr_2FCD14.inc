byte_2FCD14:    dc.b   0,  1,$7A,$7A,$86,$85,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3210   o
                dc.w sprite_16_8
                dc.w $7880
                dc.w $9500 ! ((grp_DF7C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF7C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF7C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7978
                dc.w $9500 ! ((grp_DF800 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF800 / 2) >> 16)
                dc.w 2
