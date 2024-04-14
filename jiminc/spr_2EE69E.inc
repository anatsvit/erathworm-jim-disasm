byte_2EE69E:    dc.b   0,  1,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_23C4   o
                dc.w sprite_16_32
                dc.w $7860
                dc.w $9500 ! ((grp_6A100 / 2) & $00FF)
                dc.w $9600 ! (((grp_6A100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_6A100 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_32
                dc.w $7880
                dc.w $9500 ! ((grp_6A200 / 2) & $00FF)
                dc.w $9600 ! (((grp_6A200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_6A200 / 2) >> 16)
                dc.w 8
