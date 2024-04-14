byte_2FF920:    dc.b   0,  0,$42,$C1,$40,$BF,$41,$C0,$42,$C0
                                        ; DATA XREF: ROM:off_35A8   o
                dc.w sprite_8_8
                dc.w $3BBF
                dc.w $9500 ! ((grp_F9540 / 2) & $00FF)
                dc.w $9600 ! (((grp_F9540 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F9540 / 2) >> 16)
                dc.w 1
