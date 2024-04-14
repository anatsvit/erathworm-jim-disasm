byte_2CE6F8:    dc.b   0,  0,$95,$75,$A0,$85,$9A,$7D,$9B,$7D
                                        ; DATA XREF: ROM:off_AD8   o
                dc.w sprite_16_24
                dc.w $9373
                dc.w $9500 ! ((grp_16FA80 / 2) & $00FF)
                dc.w $9600 ! (((grp_16FA80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16FA80 / 2) >> 16)
                dc.w 6
