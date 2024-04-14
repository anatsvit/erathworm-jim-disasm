byte_2CEBD2:    dc.b   0,  2,$78,$46,$81,$7F,$7C,$62,$7D,$62
                                        ; DATA XREF: ROM:off_B14   o
                dc.w sprite_16_24
                dc.w $7654
                dc.w $9500 ! ((grp_170080 / 2) & $00FF)
                dc.w $9600 ! (((grp_170080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_170080 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_24
                dc.w $7E6C
                dc.w $9500 ! ((grp_192340 / 2) & $00FF)
                dc.w $9600 ! (((grp_192340 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192340 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $7644
                dc.w $9500 ! ((grp_B0F80 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0F80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0F80 / 2) >> 16)
                dc.w 2
