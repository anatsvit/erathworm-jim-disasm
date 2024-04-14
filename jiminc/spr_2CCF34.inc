byte_2CCF34:    dc.b   0,  1,$70,$77,$8B,$8D,$7D,$82,$7E,$82
                                        ; DATA XREF: ROM:off_850   o
                dc.w sprite_32_24
                dc.w $6E75
                dc.w $9500 ! ((grp_11F5C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_11F5C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11F5C0 / 2) >> 16)
                dc.w $C
                dc.w sprite_24_8
                dc.w $728D
                dc.w $9500 ! ((grp_183760 / 2) & $00FF)
                dc.w $9600 ! (((grp_183760 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_183760 / 2) >> 16)
                dc.w 3
