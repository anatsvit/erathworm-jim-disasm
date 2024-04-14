byte_2CE0DA:    dc.b   0,  1,$86,$81,$9F,$8E,$92,$87,$93,$87
                                        ; DATA XREF: ROM:off_9F4   o
                dc.w sprite_32_16
                dc.w $8381
                dc.w $9500 ! ((grp_46500 / 2) & $00FF)
                dc.w $9600 ! (((grp_46500 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_46500 / 2) >> 16)
                dc.w 8
                dc.w sprite_8_8
                dc.w $9A79
                dc.w $9500 ! ((grp_E1FA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1FA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1FA0 / 2) >> 16)
                dc.w 1
