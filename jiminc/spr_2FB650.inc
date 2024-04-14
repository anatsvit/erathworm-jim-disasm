byte_2FB650:    dc.b   0,  2,$76,$62,$84,$8D,$7D,$77,$7E,$77
                                        ; DATA XREF: ROM:off_2F80   o
                dc.w sprite_16_32
                dc.w $7760
                dc.w $9500 ! ((grp_70900 / 2) & $00FF)
                dc.w $9600 ! (((grp_70900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_70900 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $7780
                dc.w $9500 ! ((grp_92980 / 2) & $00FF)
                dc.w $9600 ! (((grp_92980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_92980 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $6F76
                dc.w $9500 ! ((grp_C5080 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5080 / 2) >> 16)
                dc.w 2
