byte_2CCD04:    dc.b   0,  2,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_818   o
                dc.w sprite_16_32
                dc.w $7868
                dc.w $9500 ! ((grp_5B700 / 2) & $00FF)
                dc.w $9600 ! (((grp_5B700 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5B700 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_24
                dc.w $7888
                dc.w $9500 ! ((grp_16F780 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F780 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_8
                dc.w $7860
                dc.w $9500 ! ((grp_C6E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6E00 / 2) >> 16)
                dc.w 2
