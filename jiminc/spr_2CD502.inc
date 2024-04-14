byte_2CD502:    dc.b   0,  0,$9D,$66,$A9,$6D,$8D,$91,$8E,$91
                                        ; DATA XREF: ROM:off_8CC   o
                dc.w sprite_16_16
                dc.w $9C64
                dc.w $9500 ! ((grp_73B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_73B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_73B80 / 2) >> 16)
                dc.w 4
