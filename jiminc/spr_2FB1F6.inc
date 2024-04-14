byte_2FB1F6:    dc.b   0,  0,$79,$7B,$84,$80,$7E,$7D,$7F,$7D
                                        ; DATA XREF: ROM:off_2F34   o
                dc.w sprite_16_16
                dc.w $7779
                dc.w $9500 ! ((grp_91B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_91B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_91B80 / 2) >> 16)
                dc.w 4
