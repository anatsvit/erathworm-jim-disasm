byte_2FAC6E:    dc.b   0,  1,$76,$76,$8C,$8C,$81,$81,$82,$81
                                        ; DATA XREF: ROM:off_2E44   o
                dc.w sprite_24_32
                dc.w $7474
                dc.w $9500 ! ((grp_11BB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_11BB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11BB40 / 2) >> 16)
                dc.w $C
                dc.w sprite_8_16
                dc.w $8C79
                dc.w $9500 ! ((grp_C4BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4BC0 / 2) >> 16)
                dc.w 2
