byte_2FD600:    dc.b   0,  4,$5F,$4B,$93,$8D,$86,$6C,$87,$6C
                                        ; DATA XREF: ROM:off_32F8   o
                dc.w sprite_24_16
                dc.w $7E49
                dc.w $9500 ! ((grp_16D200 / 2) & $00FF)
                dc.w $9600 ! (((grp_16D200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16D200 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_24
                dc.w $7E70
                dc.w $9500 ! ((grp_181E40 / 2) & $00FF)
                dc.w $9600 ! (((grp_181E40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_181E40 / 2) >> 16)
                dc.w 6
                dc.w sprite_32_8
                dc.w $7088
                dc.w $9500 ! ((grp_A0E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0E00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_32
                dc.w $7B50
                dc.w $9500 ! ((grp_AED00 / 2) & $00FF)
                dc.w $9600 ! (((grp_AED00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_AED00 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_16
                dc.w $8360
                dc.w $9500 ! ((grp_C5A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C5A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C5A80 / 2) >> 16)
                dc.w 2
