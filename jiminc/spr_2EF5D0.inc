byte_2EF5D0:    dc.b   0,  2,$7D,$5F,$8D,$68,$85,$63,$86,$63
                                        ; DATA XREF: ROM:off_24F8   o
                dc.w sprite_16_8
                dc.w $7B5D
                dc.w $9500 ! ((grp_D9C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9C80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7B65
                dc.w $9500 ! ((grp_F0EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0EC0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $8B65
                dc.w $9500 ! ((grp_F0EE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0EE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0EE0 / 2) >> 16)
                dc.w 1
