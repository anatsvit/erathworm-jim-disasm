byte_2ECF16:    dc.b   0,  2,$70,$82,$A1,$87,$88,$84,$89,$84
                                        ; DATA XREF: ROM:off_2244   o
                dc.w sprite_32_8
                dc.w $6C82
                dc.w $9500 ! ((grp_9D780 / 2) & $00FF)
                dc.w $9600 ! (((grp_9D780 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9D780 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $727A
                dc.w $9500 ! ((grp_18C6A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_18C6A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18C6A0 / 2) >> 16)
                dc.w 3
                dc.w sprite_24_8
                dc.w $8C83
                dc.w $9500 ! ((grp_18C640 / 2) & $00FF)
                dc.w $9600 ! (((grp_18C640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_18C640 / 2) >> 16)
                dc.w 3
