byte_2EA0A0:    dc.b   0,  2,$72,$74,$93,$8E,$82,$81,$83,$81
                                        ; DATA XREF: ROM:off_1F00   o
                dc.w sprite_24_32
                dc.w $7871
                dc.w $9500 ! ((grp_10EF40 / 2) & $00FF)
                dc.w $9600 ! (((grp_10EF40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_10EF40 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_16
                dc.w $7081
                dc.w $9500 ! ((grp_BDAC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_BDAC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_BDAC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $9085
                dc.w $9500 ! ((grp_EEE60 / 2) & $00FF)
                dc.w $9600 ! (((grp_EEE60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EEE60 / 2) >> 16)
                dc.w 1
