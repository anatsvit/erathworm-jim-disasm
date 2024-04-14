byte_2FD22C:    dc.b   0,  1,$7B,$7D,$85,$83,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_32C0   o
                dc.w sprite_16_8
                dc.w $797B
                dc.w $9500 ! ((grp_DFAC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DFAC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DFAC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8083
                dc.w $9500 ! ((grp_F8200 / 2) & $00FF)
                dc.w $9600 ! (((grp_F8200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F8200 / 2) >> 16)
                dc.w 1
