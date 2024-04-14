byte_2F41CA:    dc.b   0,  1,$7B,$7A,$86,$86,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_28EC   o
                dc.w sprite_16_16
                dc.w $7978
                dc.w $9500 ! ((grp_8DA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_8DA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8DA80 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $7B88
                dc.w $9500 ! ((grp_F35C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F35C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F35C0 / 2) >> 16)
                dc.w 1
