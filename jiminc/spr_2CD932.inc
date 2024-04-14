byte_2CD932:    dc.b   0,  1,$84,$86,$91,$8D,$84,$8E,$82,$9E
                                        ; DATA XREF: ROM:off_93C   o
                dc.w sprite_16_8
                dc.w $8088
                dc.w $9500 ! ((grp_C7BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7BC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $8C7B
                dc.w $9500 ! ((grp_B0880 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0880 / 2) >> 16)
                dc.w 2
