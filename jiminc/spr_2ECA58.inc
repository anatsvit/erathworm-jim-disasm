byte_2ECA58:    dc.b   0,  1,$78,$7B,$87,$86,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_21A0   o
                dc.w sprite_8_16
                dc.w $807B
                dc.w $9500 ! ((grp_BE680 / 2) & $00FF)
                dc.w $9600 ! (((grp_BE680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BE680 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $787B
                dc.w $9500 ! ((grp_EFC60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFC60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFC60 / 2) >> 16)
                dc.w 1
