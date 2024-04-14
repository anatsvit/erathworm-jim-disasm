byte_2F4294:    dc.b   0,  1,$7E,$7D,$83,$83,$7C,$80,$7C,$7E
                                        ; DATA XREF: ROM:off_2908   o
                dc.w sprite_8_16
                dc.w $7B7B
                dc.w $9500 ! ((grp_C13C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C13C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C13C0 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $837B
                dc.w $9500 ! ((grp_F3640 / 2) & $00FF)
                dc.w $9600 ! (((grp_F3640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F3640 / 2) >> 16)
                dc.w 1
