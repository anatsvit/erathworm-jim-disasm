byte_2FB238:    dc.b   0,  0,$75,$79,$87,$81,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:off_2F40   o
                dc.w sprite_24_16
                dc.w $7377
                dc.w $9500 ! ((grp_16AEC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16AEC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16AEC0 / 2) >> 16)
                dc.w 6
