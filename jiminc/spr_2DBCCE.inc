byte_2DBCCE:    dc.b   0,  2,$6C,$69,$86,$8C,$79,$7A,$70,$6A
                                        ; DATA XREF: ROM:off_15BC   o
                dc.w sprite_32_16
                dc.w $6E7B
                dc.w $9500 ! ((grp_4A000 / 2) & $00FF)
                dc.w $9600 ! (((grp_4A000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_4A000 / 2) >> 16)
                dc.w 8
                dc.w sprite_24_16
                dc.w $6E6B
                dc.w $9500 ! ((grp_15D9C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_15D9C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_15D9C0 / 2) >> 16)
                dc.w 6
                dc.w sprite_24_8
                dc.w $758B
                dc.w $9500 ! ((grp_185860 / 2) & $00FF)
                dc.w $9600 ! (((grp_185860 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_185860 / 2) >> 16)
                dc.w 3
