byte_2FD340:    dc.b   0,  1,$79,$7C,$8C,$8D,$82,$84,$83,$84
                                        ; DATA XREF: ROM:off_32D8   o
                dc.w sprite_24_16
                dc.w $7779
                dc.w $9500 ! ((grp_16D140 / 2) & $00FF)
                dc.w $9600 ! (((grp_16D140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16D140 / 2) >> 16)
                dc.w 6
                dc.w sprite_32_8
                dc.w $7289
                dc.w $9500 ! ((grp_A0B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0B80 / 2) >> 16)
                dc.w 4
