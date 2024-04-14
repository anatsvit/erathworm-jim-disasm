byte_2FB616:    dc.b   0,  3,$78,$62,$88,$8D,$80,$77,$81,$77
                                        ; DATA XREF: ROM:off_2F7C   o
                dc.w sprite_16_32
                dc.w $7660
                dc.w $9500 ! ((grp_70800 / 2) & $00FF)
                dc.w $9600 ! (((grp_70800 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_70800 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_8
                dc.w $7680
                dc.w $9500 ! ((grp_DF5C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF5C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF5C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $866A
                dc.w $9500 ! ((grp_C5040 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5040 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7E88
                dc.w $9500 ! ((grp_F7CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7CC0 / 2) >> 16)
                dc.w 1
