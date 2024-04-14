byte_2FBC86:    dc.b   0,  2,$7B,$7C,$87,$88,$81,$82,$82,$82
                                        ; DATA XREF: ROM:off_2FEC   o
                dc.w sprite_8_16
                dc.w $7B7B
                dc.w $9500 ! ((grp_C4DC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4DC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4DC0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $837A
                dc.w $9500 ! ((grp_C4E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C4E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C4E00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $7381
                dc.w $9500 ! ((grp_F7A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F7A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F7A00 / 2) >> 16)
                dc.w 1
