byte_2ED1DC:    dc.b   0,  1,$6C,$7F,$96,$8E,$86,$78,$87,$78
                                        ; DATA XREF: ROM:off_2270   o
                dc.w sprite_16_32
                dc.w $7D72
                dc.w $9500 ! ((grp_68800 / 2) & $00FF)
                dc.w $9600 ! (((grp_68800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_68800 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $7F62
                dc.w $9500 ! ((grp_88B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_88B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88B00 / 2) >> 16)
                dc.w 4
