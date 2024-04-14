byte_2ECD5C:    dc.b   0,  0,$72,$8E,$87,$8D,$80,$8D,$81,$8D
                                        ; DATA XREF: ROM:off_2210   o
                dc.w sprite_32_8
                dc.w $708C
                dc.w $9500 ! ((grp_9D880 / 2) & $00FF)
                dc.w $9600 ! (((grp_9D880 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_9D880 / 2) >> 16)
                dc.w 4
