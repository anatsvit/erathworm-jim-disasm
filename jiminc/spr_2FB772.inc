byte_2FB772:    dc.b   0,  1,$75,$62,$88,$8D,$7E,$77,$7F,$77
                                        ; DATA XREF: ROM:off_2F94   o
                dc.w sprite_24_16
                dc.w $7380
                dc.w $9500 ! ((grp_16BB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16BB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16BB80 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_32
                dc.w $7C60
                dc.w $9500 ! ((grp_AEC00 / 2) & $00FF)
                dc.w $9600 ! (((grp_AEC00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AEC00 / 2) >> 16)
                dc.w 4
