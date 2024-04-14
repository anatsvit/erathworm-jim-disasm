byte_2FF06A:    dc.b   0,  0,$88,$7F,$8B,$86,$89,$82,$8A,$82
                                        ; DATA XREF: ROM:off_352C   o
                dc.w sprite_8_16
                dc.w $867D
                dc.w $9500 ! ((grp_C6300 / 2) & $00FF)
                dc.w $9600 ! (((grp_C6300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C6300 / 2) >> 16)
                dc.w 2
