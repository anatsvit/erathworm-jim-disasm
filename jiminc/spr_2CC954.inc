byte_2CC954:    dc.b   0,  4,$5C,$75,$A2,$8F,$7F,$82,$80,$82
                                        ; DATA XREF: ROM:off_7E0   o
                dc.w sprite_32_32
                dc.w $5E73
                dc.w $9500 ! ((grp_10000 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$00
                dc.w $9600 ! (((grp_10000 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$80
                dc.w $9700 ! ((grp_10000 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$00
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w   $10
                dc.w sprite_32_24
                dc.w $7E74
                dc.w $9500 ! ((grp_11EB40 / 2) & $00FF)
                dc.w $9600 ! (((grp_11EB40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_11EB40 / 2) >> 16)
                dc.w    $C
                dc.w sprite_24_8
                dc.w $7E8C
                dc.w $9500 ! ((grp_1830A0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1830A0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1830A0 / 2) >> 16)
                dc.w     3
                dc.w sprite_8_16
                dc.w $9E77
                dc.w $9500 ! ((grp_B0080 / 2) & $00FF)
                dc.w $9600 ! (((grp_B0080 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B0080 / 2) >> 16)
                dc.w     2
                dc.w sprite_8_8
                dc.w $5673
                dc.w $9500 ! ((grp_E1600 / 2) & $00FF)
                dc.w $9600 ! (((grp_E1600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E1600 / 2) >> 16)
                dc.w     1
