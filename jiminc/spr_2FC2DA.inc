byte_2FC2DA:    dc.b   0,  1,$66,$8A,$74,$95,$6D,$8F,$6E,$8F
                                        ; DATA XREF: ROM:off_30DC   o
                dc.w sprite_16_8
                dc.w $6490
                dc.w $9500 ! ((grp_DF680 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF680 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF680 / 2) >> 16)
                dc.w 2
                dc.w sprite_16_8
                dc.w $6788
                dc.w $9500 ! ((grp_DF640 / 2) & $00FF)
                dc.w $9600 ! (((grp_DF640 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_DF640 / 2) >> 16)
                dc.w 2
