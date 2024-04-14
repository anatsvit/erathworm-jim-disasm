byte_2CD6F8:    dc.b   0,  1,$6E,$5A,$83,$78,$82,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_900   o
                dc.w sprite_32_32
                dc.w $6A57
                dc.w $9500 ! ((grp_10200 / 2) & $00FF)
                dc.w $9600 ! (((grp_10200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_10200 / 2) >> 16)
                dc.w $10
                dc.w sprite_24_8
                dc.w $7177
                dc.w $9500 ! ((grp_183460 / 2) & $00FF)
                dc.w $9600 ! (((grp_183460 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183460 / 2) >> 16)
                dc.w 3
