byte_2CCBD8:    dc.b   0,  3,$7A,$62,$84,$9D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_800   o
                dc.w sprite_16_32
                dc.w $7870
                dc.w $9500 ! ((grp_5B000 / 2) & $00FF)
                dc.w $9600 ! (((grp_5B000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5B000 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $7890
                dc.w $9500 ! ((grp_72F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_72F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_72F00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7860
                dc.w $9500 ! ((grp_C6DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6DC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $7868
                dc.w $9500 ! ((grp_C6D40 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6D40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6D40 / 2) >> 16)
                dc.w 2
