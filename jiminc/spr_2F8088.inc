byte_2F8088:    dc.b   0,  0,$77,$7C,$8B,$84,$7F,$80,$80,$80
                                        ; DATA XREF: ROM:off_2C10   o
                dc.w sprite_24_8
                dc.w $747D
                dc.w $9500 ! ((grp_18F3A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_18F3A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18F3A0 / 2) >> 16)
                dc.w 3
