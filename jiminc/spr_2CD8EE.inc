byte_2CD8EE:    dc.b   0,  1,$84,$85,$90,$8D,$84,$8E,$82,$9F
                                        ; DATA XREF: ROM:off_934   o
                dc.w sprite_16_8
                dc.w $8088
                dc.w $9500 ! ((grp_C7E80 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7E80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7E80 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $8780
                dc.w $9500 ! ((grp_C7EC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_C7EC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_C7EC0 / 2) >> 16)
                dc.w 2
