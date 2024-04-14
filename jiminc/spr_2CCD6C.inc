byte_2CCD6C:    dc.b   0,  1,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_820   o
                dc.w sprite_16_32
                dc.w $7860
                dc.w $9500 ! ((grp_5B900 / 2) & $00FF)
                dc.w $9600 ! (((grp_5B900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5B900 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_32
                dc.w $7880
                dc.w $9500 ! ((grp_5BA00 / 2) & $00FF)
                dc.w $9600 ! (((grp_5BA00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5BA00 / 2) >> 16)
                dc.w 8
