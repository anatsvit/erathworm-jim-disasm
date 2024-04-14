byte_2EB484:    dc.b   0,  0,$70,$4D,$73,$4D,$71,$4D,$72,$4D
                                        ; DATA XREF: ROM:off_2018   o
                dc.w sprite_16_8
                dc.w $6B4B
                dc.w $9500 ! ((grp_D7B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_D7B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D7B40 / 2) >> 16)
                dc.w 2
