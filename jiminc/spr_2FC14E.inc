byte_2FC14E:    dc.b   0,  0,$75,$8D,$7B,$9D,$78,$95,$79,$95
                                        ; DATA XREF: ROM:off_30AC   o
                dc.w sprite_16_24
                dc.w $708B
                dc.w $9500 ! ((grp_181540 / 2) & $00FF)
                dc.w $9600 ! (((grp_181540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181540 / 2) >> 16)
                dc.w 6
