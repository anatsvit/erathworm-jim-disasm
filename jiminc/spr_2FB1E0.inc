byte_2FB1E0:    dc.b   0,  0,$7A,$7B,$84,$80,$7F,$7D,$80,$7D
                                        ; DATA XREF: ROM:off_2F30   o
                dc.w sprite_16_16
                dc.w $7879
                dc.w $9500 ! ((grp_91B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_91B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91B00 / 2) >> 16)
                dc.w 4
