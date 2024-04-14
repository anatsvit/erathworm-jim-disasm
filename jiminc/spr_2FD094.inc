byte_2FD094:    dc.b   0,  1,$78,$7A,$8C,$84,$82,$7F,$83,$7F
                                        ; DATA XREF: ROM:off_3290   o
                dc.w sprite_24_16
                dc.w $7778
                dc.w $9500 ! ((grp_16CFC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_16CFC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_16CFC0 / 2) >> 16)
                dc.w 6
                dc.w sprite_8_8
                dc.w $6F7B
                dc.w $9500 ! ((grp_F8100 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$80
                dc.w $9600 ! (((grp_F8100 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$C0
                dc.w $9700 ! ((grp_F8100 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$07
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 1
