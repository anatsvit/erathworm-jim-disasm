byte_2FBC00:    dc.b   0,  1,$75,$75,$89,$8B,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_2FD8   o
                dc.w sprite_24_32
                dc.w $7573
                dc.w $9500 ! ((grp_11C440 / 2) & $00FF)
                dc.w $9600 ! (((grp_11C440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11C440 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_16
                dc.w $6D7B
                dc.w $9500 ! ((grp_C4D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4D40 / 2) >> 16)
                dc.w 2
