byte_2FC10C:    dc.b   0,  0,$77,$8D,$7F,$A0,$7B,$96,$7C,$96
                                        ; DATA XREF: ROM:off_30A0   o
                dc.w sprite_16_24
                dc.w $728B
                dc.w $9500 ! ((grp_181300 / 2) & $00FF)
                dc.w $9600 ! (((grp_181300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181300 / 2) >> 16)
                dc.w 6
