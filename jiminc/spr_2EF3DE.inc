byte_2EF3DE:    dc.b   0,  1,$65,$68,$95,$9E,$7D,$7F,$7E,$7F
                                        ; DATA XREF: ROM:off_24D4   o
                dc.w sprite_32_16
                dc.w $6675
                dc.w $9500 ! ((grp_52F00 / 2) & $00FF)
                dc.w $9600 ! (((grp_52F00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_52F00 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $867D
                dc.w $9500 ! ((grp_8A100 / 2) & $00FF)
                dc.w $9600 ! (((grp_8A100 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_8A100 / 2) >> 16)
                dc.w 4
