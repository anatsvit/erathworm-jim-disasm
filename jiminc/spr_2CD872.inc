byte_2CD872:    dc.b   0,  0,$5B,$54,$60,$57,$82,$8F,$81,$8F
                                        ; DATA XREF: ROM:off_924   o
                dc.w sprite_16_8
                dc.w $5952
                dc.w $9500 ! ((grp_C7B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7B80 / 2) >> 16)
                dc.w 2
