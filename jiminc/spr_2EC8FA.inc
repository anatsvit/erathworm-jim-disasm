byte_2EC8FA:    dc.b   0,  2,$79,$7C,$8F,$8E,$84,$84,$85,$84
                                        ; DATA XREF: ROM:off_2174   o
                dc.w sprite_24_16
                dc.w $7B80
                dc.w $9500 ! ((grp_164380 / 2) & $00FF)
                dc.w $9600 ! (((grp_164380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_164380 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_16
                dc.w $7679
                dc.w $9500 ! ((grp_BE980 / 2) & $00FF)
                dc.w $9600 ! (((grp_BE980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BE980 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $8878
                dc.w $9500 ! ((grp_EFE80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EFE80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EFE80 / 2) >> 16)
                dc.w 1
