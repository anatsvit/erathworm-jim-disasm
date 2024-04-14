byte_2F99AA:    dc.b   0,  1,$79,$79,$86,$87,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_2DA4   o
                dc.w sprite_24_16
                dc.w $7577
                dc.w $9500 ! ((grp_16A500 / 2) & $00FF)
                dc.w $9600 ! (((grp_16A500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16A500 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $7F87
                dc.w $9500 ! ((grp_F6CE0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F6CE0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F6CE0 / 2) >> 16)
                dc.w 1
