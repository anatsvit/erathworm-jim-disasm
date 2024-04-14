byte_2FB222:    dc.b   0,  0,$77,$7A,$86,$81,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:off_2F3C   o
                dc.w sprite_24_16
                dc.w $7578
                dc.w $9500 ! ((grp_16AE00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16AE00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16AE00 / 2) >> 16)
                dc.w 6
