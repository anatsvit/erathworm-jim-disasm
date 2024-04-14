byte_2CDA5A:    dc.b   0,  1,$82,$85,$95,$8C,$84,$8E,$84,$A0
                                        ; DATA XREF: ROM:off_95C   o
                dc.w sprite_16_8
                dc.w $808B
                dc.w $9500 ! ((grp_C7CC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7CC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7CC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $8883
                dc.w $9500 ! ((grp_C7D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7D00 / 2) >> 16)
                dc.w 2
