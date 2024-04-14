byte_2EA0FC:    dc.b   0,  3,$6E,$6C,$92,$88,$80,$7A,$81,$7A
                                        ; DATA XREF: ROM:off_1F08   o
                dc.w sprite_32_32
                dc.w $706A
                dc.w $9500 ! ((grp_28600 / 2) & $00FF)
                dc.w $9600 ! (((grp_28600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_28600 / 2) >> 16)
                dc.w $10
                dc.w sprite_8_16
                dc.w $687A
                dc.w $9500 ! ((grp_BDB80 / 2) & $00FF)
                dc.w $9600 ! (((grp_BDB80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BDB80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $9077
                dc.w $9500 ! ((grp_BDB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_BDB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BDB40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $748A
                dc.w $9500 ! ((grp_EEE80 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEE80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEE80 / 2) >> 16)
                dc.w 1
