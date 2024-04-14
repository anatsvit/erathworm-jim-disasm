byte_2F99EE:    dc.b   0,  1,$70,$8E,$8F,$8D,$7F,$8D,$80,$8D
                                        ; DATA XREF: ROM:off_2DAC   o
                dc.w sprite_32_8
                dc.w $738C
                dc.w $9500 ! ((grp_A0000 / 2) & $00FF)
                dc.w $9600 ! (((grp_A0000 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A0000 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $6B8C
                dc.w $9500 ! ((grp_F6D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_F6D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_F6D00 / 2) >> 16)
                dc.w 1
