byte_2EE6C0:    dc.b   0,  1,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_23C8   o
                dc.w sprite_16_32
                dc.w $7860
                dc.w $9500 ! ((grp_6A300 / 2) & $00FF)
                dc.w $9600 ! (((grp_6A300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_6A300 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_32
                dc.w $7880
                dc.w $9500 ! ((grp_6A400 / 2) & $00FF)
                dc.w $9600 ! (((grp_6A400 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_6A400 / 2) >> 16)
                dc.w 8
