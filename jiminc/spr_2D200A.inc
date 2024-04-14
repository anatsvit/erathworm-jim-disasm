byte_2D200A:    dc.b   0,  4,$66,$6C,$95,$8F,$80,$7D,$81,$7D
                                        ; DATA XREF: ROM:off_E8C   o
                dc.w sprite_32_32
                dc.w $656A
                dc.w $9500 ! ((grp_16A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_16A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16A00 / 2) >> 16)
                dc.w $10
                dc.w sprite_16_32
                dc.w $856A
                dc.w $9500 ! ((grp_5DE00 / 2) & $00FF)
                dc.w $9600 ! (((grp_5DE00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_5DE00 / 2) >> 16)
                dc.w 8
                dc.w sprite_32_8
                dc.w $648A
                dc.w $9500 ! ((grp_97900 / 2) & $00FF)
                dc.w $9600 ! (((grp_97900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_97900 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_8
                dc.w $848A
                dc.w $9500 ! ((grp_C9B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_C9B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C9B00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $9575
                dc.w $9500 ! ((grp_B2380 / 2) & $00FF)
                dc.w $9600 ! (((grp_B2380 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B2380 / 2) >> 16)
                dc.w 2
