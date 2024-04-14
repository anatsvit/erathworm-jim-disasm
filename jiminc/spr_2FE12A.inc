byte_2FE12A:    dc.b   0,  0,$7C,$7B,$82,$81,$7F,$7E,$80,$7E
                                        ; DATA XREF: ROM:off_3384   o
                dc.w sprite_16_16
                dc.w $7579
                dc.w $9500 ! ((grp_95C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_95C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_95C80 / 2) >> 16)
                dc.w 4
funchar_0:      dc.b   0,  0,$73,$72,$8E,$8D,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_3388   o
                dc.w sprite_32_32
                dc.w $7170
                dc.w $9500 ! ((grp_44E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_44E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_44E00 / 2) >> 16)
                dc.w $10
funchar_1:      dc.b   0,  0,$78,$72,$86,$8D,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_338C   o
                dc.w sprite_24_32
                dc.w $7670
                dc.w $9500 ! ((grp_11CEC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_11CEC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11CEC0 / 2) >> 16)
                dc.w $C
