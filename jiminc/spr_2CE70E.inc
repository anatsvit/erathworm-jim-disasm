byte_2CE70E:    dc.b   0,  0,$95,$75,$A0,$85,$9A,$7D,$9B,$7D
                                        ; DATA XREF: ROM:off_ADC   o
                dc.w sprite_16_24
                dc.w $9373
                dc.w $9500 ! ((grp_16F900 / 2) & $00FF)
                dc.w $9600 ! (((grp_16F900 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16F900 / 2) >> 16)
                dc.w 6
