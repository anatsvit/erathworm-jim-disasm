byte_2FE7D2:    dc.b   0,  1,$7D,$82,$89,$93,$83,$8A,$84,$8A
                                        ; DATA XREF: ROM:off_342C   o
                dc.w sprite_16_16
                dc.w $7B80
                dc.w $9500 ! ((grp_95D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_95D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_95D80 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7C90
                dc.w $9500 ! ((grp_E0680 / 2) & $00FF)
                dc.w $9600 ! (((grp_E0680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E0680 / 2) >> 16)
                dc.w 2
