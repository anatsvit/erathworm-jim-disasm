byte_2CDCFE:    dc.b   0,  2,$78,$79,$88,$86,$80,$7F,$81,$7F
                                        ; DATA XREF: ROM:off_9B4   o
                dc.w sprite_8_24
                dc.w $7C74
                dc.w $9500 ! ((grp_192040 / 2) & $00FF)
                dc.w $9600 ! (((grp_192040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_192040 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_16
                dc.w $7478
                dc.w $9500 ! ((grp_B0B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0B80 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $8478
                dc.w $9500 ! ((grp_B0BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0BC0 / 2) >> 16)
                dc.w 2
