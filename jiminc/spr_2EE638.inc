byte_2EE638:    dc.b   0,  1,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_23B8   o
                dc.w sprite_16_32
                dc.w $7860
                dc.w $9500 ! ((grp_69B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_69B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_69B00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_32
                dc.w $7880
                dc.w $9500 ! ((grp_69C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_69C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_69C00 / 2) >> 16)
                dc.w 8