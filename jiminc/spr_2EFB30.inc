byte_2EFB30:    dc.b   0,  2,$79,$7F,$87,$8C,$80,$85,$81,$85
                                        ; DATA XREF: ROM:off_2560   o
                dc.w sprite_16_8
                dc.w $7785
                dc.w $9500 ! ((grp_D9680 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9680 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7A7D
                dc.w $9500 ! ((grp_D9840 / 2) & $00FF)
                dc.w $9600 ! (((grp_D9840 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D9840 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7F8D
                dc.w $9500 ! ((grp_F0D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F0D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F0D00 / 2) >> 16)
                dc.w 1
