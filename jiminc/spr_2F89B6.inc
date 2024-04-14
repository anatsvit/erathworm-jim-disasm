byte_2F89B6:    dc.b   0,  2,$66,$84,$9D,$8D,$81,$88,$82,$88
                                        ; DATA XREF: ROM:off_2CA4   o
                dc.w sprite_32_8
                dc.w $6088
                dc.w $9500 ! ((grp_9FA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_9FA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9FA80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $8088
                dc.w $9500 ! ((grp_9FB00 / 2) & $00FF)
                dc.w $9600 ! (((grp_9FB00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9FB00 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $7B80
                dc.w $9500 ! ((grp_18F940 / 2) & $00FF)
                dc.w $9600 ! (((grp_18F940 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18F940 / 2) >> 16)
                dc.w 3
