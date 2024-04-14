byte_2FC9CE:    dc.b   0,  0,$7A,$7B,$84,$83,$7F,$7F,$80,$7F
                                        ; DATA XREF: ROM:off_317C   o
                dc.w sprite_16_16
                dc.w $7779
                dc.w $9500 ! ((grp_93A80 / 2) & $00FF)
                dc.w $9600 ! (((grp_93A80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_93A80 / 2) >> 16)
                dc.w 4
