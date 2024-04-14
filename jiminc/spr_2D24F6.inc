byte_2D24F6:    dc.b   0,  2,$7A,$7E,$87,$AB,$8A,$8E,$8B,$8E
                                        ; DATA XREF: ROM:off_ED4   o
                dc.w sprite_8_32
                dc.w $7B8D
                dc.w $9500 ! ((grp_A4000 / 2) & $00FF)
                dc.w $9600 ! (((grp_A4000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A4000 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_24
                dc.w $8395
                dc.w $9500 ! ((grp_193660 / 2) & $00FF)
                dc.w $9600 ! (((grp_193660 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_193660 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $7A7D
                dc.w $9500 ! ((grp_B2700 / 2) & $00FF)
                dc.w $9600 ! (((grp_B2700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B2700 / 2) >> 16)
                dc.w 2
