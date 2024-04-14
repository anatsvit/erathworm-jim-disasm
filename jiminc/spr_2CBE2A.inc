byte_2CBE2A:    dc.b   0,  5,$74,  2,$8B,$B0,$7F,$48,$80,$48
                                        ; DATA XREF: ROM:off_6AC   o
                dc.w sprite_24_24
                dc.w $7369
                dc.w $9500 ! ((grp_13CB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_13CB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_13CB40 / 2) >> 16)
                dc.w     9
                dc.w sprite_16_16
                dc.w $6F81
                dc.w $9500 ! ((grp_72700 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$80
                dc.w $9600 ! (((grp_72700 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$93
                dc.w $9700 ! ((grp_72700 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$03
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w     4
                dc.w sprite_8_32
                dc.w $7D01
                dc.w $9500 ! ((grp_A1E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1E00 / 2) >> 16)
                dc.w     4
                dc.w sprite_8_32
                dc.w $7D21
                dc.w $9500 ! ((grp_A1E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1E00 / 2) >> 16)
                dc.w     4
                dc.w sprite_8_32
                dc.w $7D41
                dc.w $9500 ! ((grp_A1E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_A1E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_A1E00 / 2) >> 16)
                dc.w     4
                dc.w sprite_8_8
                dc.w $7D61
                dc.w $9500 ! ((grp_E1040 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1040 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1040 / 2) >> 16)
                dc.w     1
