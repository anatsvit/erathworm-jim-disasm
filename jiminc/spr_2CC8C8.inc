byte_2CC8C8:    dc.b   0,  2,$76,$5E,$8C,$8E,$81,$76,$82,$76
                                        ; DATA XREF: ROM:off_7D8   o
                dc.w sprite_24_32
                dc.w $7561
                dc.w $9500 ! ((grp_F9940 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$A0
                dc.w $9600 ! (((grp_F9940 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$CC
                dc.w $9700 ! ((grp_F9940 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$07
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w    $C
                dc.w sprite_24_16
                dc.w $7581
                dc.w $9500 ! ((grp_1561C0 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$E0
                dc.w $9600 ! (((grp_1561C0 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$B0
                dc.w $9700 ! ((grp_1561C0 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$0A
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w     6
                dc.w sprite_16_8
                dc.w $7959
                dc.w $9500 ! ((grp_C6CC0 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$60
                dc.w $9600 ! (((grp_C6CC0 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$36
                dc.w $9700 ! ((grp_C6CC0 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$06
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w     2
