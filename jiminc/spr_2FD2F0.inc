byte_2FD2F0:    dc.b   0,  2,$7E,$7C,$90,$8D,$87,$84,$88,$84
                                        ; DATA XREF: ROM:off_32D0   o
                dc.w sprite_16_16
                dc.w $7C78
                dc.w $9500 ! ((grp_95A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_95A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_95A80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $7288
                dc.w $9500 ! ((grp_A1680 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1680 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $8C7B
                dc.w $9500 ! ((grp_F82C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_F82C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F82C0 / 2) >> 16)
                dc.w 1
