byte_2EB49A:    dc.b   0,  0,$70,$4E,$73,$4C,$71,$4D,$72,$4D
                                        ; DATA XREF: ROM:off_201C   o
                dc.w sprite_8_8
                dc.w $6E4A
                dc.w $9500 ! ((grp_EF4E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_EF4E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_EF4E0 / 2) >> 16)
                dc.w 1
