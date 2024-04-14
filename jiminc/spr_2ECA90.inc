byte_2ECA90:    dc.b   0,  0,$78,$7B,$87,$88,$7F,$81,$80,$81
                                        ; DATA XREF: ROM:off_21A8   o
                dc.w sprite_16_16
                dc.w $787B
                dc.w $9500 ! ((grp_88200 / 2) & $00FF)
                dc.w $9600 ! (((grp_88200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_88200 / 2) >> 16)
                dc.w 4
