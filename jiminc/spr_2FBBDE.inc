byte_2FBBDE:    dc.b   0,  1,$75,$74,$8B,$8C,$80,$80,$81,$80
                                        ; DATA XREF: ROM:off_2FD4   o
                dc.w sprite_24_32
                dc.w $7772
                dc.w $9500 ! ((grp_11C2C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_11C2C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11C2C0 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_24
                dc.w $6F78
                dc.w $9500 ! ((grp_19FEA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_19FEA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_19FEA0 / 2) >> 16)
                dc.w 3
