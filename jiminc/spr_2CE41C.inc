byte_2CE41C:    dc.b   0,  0,$88,$84,$93,$87,$8D,$85,$8E,$85
                                        ; DATA XREF: ROM:off_A60   o
                dc.w sprite_16_8
                dc.w $8682
                dc.w $9500 ! ((grp_C74C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C74C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C74C0 / 2) >> 16)
                dc.w 2
