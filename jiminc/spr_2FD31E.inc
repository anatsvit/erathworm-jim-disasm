byte_2FD31E:    dc.b   0,  1,$79,$87,$8B,$8D,$82,$8A,$83,$8A
                                        ; DATA XREF: ROM:off_32D4   o
                dc.w sprite_32_8
                dc.w $7388
                dc.w $9500 ! ((grp_A0B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0B00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $7A80
                dc.w $9500 ! ((grp_DFB00 / 2) & $00FF)
                dc.w $9600 ! (((grp_DFB00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DFB00 / 2) >> 16)
                dc.w 2
