byte_2EB46E:    dc.b   0,  0,$70,$4D,$74,$4D,$72,$4D,$73,$4D
                                        ; DATA XREF: ROM:off_2014   o
                dc.w sprite_16_8
                dc.w $694B
                dc.w $9500 ! ((grp_D7B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_D7B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_D7B00 / 2) >> 16)
                dc.w 2
