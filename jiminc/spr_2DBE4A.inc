byte_2DBE4A:    dc.b   0,  1,$6C,$70,$88,$88,$7A,$7C,$6F,$72
                                        ; DATA XREF: ROM:off_15DC   o
                dc.w sprite_32_24
                dc.w $6E79
                dc.w $9500 ! ((grp_124B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_124B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_124B40 / 2) >> 16)
                dc.w $C
                dc.w sprite_24_8
                dc.w $6E71
                dc.w $9500 ! ((grp_1858C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1858C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1858C0 / 2) >> 16)
                dc.w 3
groovy_spr_1:   dc.b   0,  7,$8F,$82,$BC,$B5,$A5,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_1   o
                dc.w sprite_32_32
                dc.w $9088              ; x position
                dc.w $9500 ! ((grp_1CA00 / 2) & $00FF) ; Необходимо умножать offset на 2 чтобы получить реальный адрес в ROM
                dc.w $9600 ! (((grp_1CA00 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$E5
                dc.w $9700 ! ((grp_1CA00 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$00
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w $10
                dc.w sprite_32_16
                dc.w $A0A8
                dc.w $9500 ! ((grp_49600 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$00
                dc.w $9600 ! (((grp_49600 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$4B
                dc.w $9700 ! ((grp_49600 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$02
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 8
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $9080
                dc.w $9500 ! ((grp_98280 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$40
                dc.w $9600 ! (((grp_98280 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$C1
                dc.w $9700 ! ((grp_98280 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$04
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 4
                dc.w sprite_8_24
                dc.w $B080
                dc.w $9500 ! ((grp_196EA0 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$50
                dc.w $9600 ! (((grp_196EA0 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$B7
                dc.w $9700 ! ((grp_196EA0 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$0C
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 3
                dc.w sprite_8_8
                dc.w $8898
                dc.w $9500 ! ((grp_E94A0 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$50
                dc.w $9600 ! (((grp_E94A0 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$4A
                dc.w $9700 ! ((grp_E94A0 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$07
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 1
                dc.w sprite_8_8
                dc.w $98A8
                dc.w $9500 ! ((grp_E94C0 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$60
                dc.w $9600 ! (((grp_E94C0 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$4A
                dc.w $9700 ! ((grp_E94C0 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$07
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 1
                dc.w sprite_8_8
                dc.w $B890
                dc.w $9500 ! ((grp_E5B20 / 2) & $00FF) ; SET_LOWER_BYTE_OF_DMA_SRC_TO_$90
                dc.w $9600 ! (((grp_E5B20 / 2) >> 8) & $00FF) ; SET_MIDDLE_BYTE_OF_DMA_SRC_TO_$2D
                dc.w $9700 ! ((grp_E5B20 / 2) >> 16) ; SET_HIGH_BYTE_OF_DMA_SRC_TO_$07
                                        ; SET_COPY_M68K_TO_VRAM_DMA_MODE
                dc.w 1
groovy_spr_6:   dc.b   0,  8,$8F,$82,$BC,$B5,$A5,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_6   o
                dc.w sprite_32_32
                dc.w $9088
                dc.w $9500 ! ((grp_17A00 / 2) & $00FF)
                dc.w $9600 ! (((grp_17A00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_17A00 / 2) >> 16)
                dc.w $10
                dc.w sprite_24_16
                dc.w $A8A8
                dc.w $9500 ! ((grp_159B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_159B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_159B80 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_16
                dc.w $98A8
                dc.w $9500 ! ((grp_77D80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77D80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77D80 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B088
                dc.w $9500 ! ((grp_77D00 / 2) & $00FF)
                dc.w $9600 ! (((grp_77D00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77D00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $9080
                dc.w $9500 ! ((grp_98280 / 2) & $00FF)
                dc.w $9600 ! (((grp_98280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_98280 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_8
                dc.w $889B
                dc.w $9500 ! ((grp_E5B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B40 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $90A8
                dc.w $9500 ! ((grp_E5B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B80 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $B080
                dc.w $9500 ! ((grp_E5B60 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B60 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B60 / 2) >> 16)
                dc.w 1
groovy_spr_2:   dc.b   0,  7,$8D,$82,$BC,$B5,$A4,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_2   o
                dc.w sprite_32_32
                dc.w $9088
                dc.w $9500 ! ((grp_17C00 / 2) & $00FF)
                dc.w $9600 ! (((grp_17C00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_17C00 / 2) >> 16)
                dc.w $10
                dc.w sprite_32_16
                dc.w $A0A8
                dc.w $9500 ! ((grp_49600 / 2) & $00FF)
                dc.w $9600 ! (((grp_49600 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_49600 / 2) >> 16)
                dc.w 8
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $9080
                dc.w $9500 ! ((grp_98280 / 2) & $00FF)
                dc.w $9600 ! (((grp_98280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_98280 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_24
                dc.w $B080
                dc.w $9500 ! ((grp_1943E0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1943E0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1943E0 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_8
                dc.w $8897
                dc.w $9500 ! ((grp_E5BA0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5BA0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5BA0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $98A8
                dc.w $9500 ! ((grp_E5BC0 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5BC0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5BC0 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $B890
                dc.w $9500 ! ((grp_E5B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B20 / 2) >> 16)
                dc.w 1
groovy_spr_3:   dc.b   0, $A,$8A,$82,$BC,$B5,$A3,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_3   o
                dc.w sprite_24_32
                dc.w $9088
                dc.w $9500 ! ((grp_101440 / 2) & $00FF)
                dc.w $9600 ! (((grp_101440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_101440 / 2) >> 16)
                dc.w $C
                dc.w sprite_16_16
                dc.w $A880
                dc.w $9500 ! ((grp_7A200 / 2) & $00FF)
                dc.w $9600 ! (((grp_7A200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_7A200 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B0A8
                dc.w $9500 ! ((grp_77E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_77E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77E00 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $90A8
                dc.w $9500 ! ((grp_98980 / 2) & $00FF)
                dc.w $9600 ! (((grp_98980 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_98980 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $9080
                dc.w $9500 ! ((grp_185020 / 2) & $00FF)
                dc.w $9600 ! (((grp_185020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_185020 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_24
                dc.w $A890
                dc.w $9500 ! ((grp_195460 / 2) & $00FF)
                dc.w $9600 ! (((grp_195460 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_195460 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $A0B0
                dc.w $9500 ! ((grp_CB140 / 2) & $00FF)
                dc.w $9600 ! (((grp_CB140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CB140 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $8898
                dc.w $9500 ! ((grp_B4B00 / 2) & $00FF)
                dc.w $9600 ! (((grp_B4B00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B4B00 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $888C
                dc.w $9500 ! ((grp_E7200 / 2) & $00FF)
                dc.w $9600 ! (((grp_E7200 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E7200 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $B890
                dc.w $9500 ! ((grp_E5B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B20 / 2) >> 16)
                dc.w 1
groovy_spr_4:   dc.b   0,  9,$82,$82,$BC,$B5,$9F,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_4   o
                dc.w sprite_32_32
                dc.w $8888
                dc.w $9500 ! ((grp_19E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_19E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_19E00 / 2) >> 16)
                dc.w $10
                dc.w sprite_24_16
                dc.w $A8A8
                dc.w $9500 ! ((grp_159B80 / 2) & $00FF)
                dc.w $9600 ! (((grp_159B80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_159B80 / 2) >> 16)
                dc.w 6
                dc.w sprite_16_16
                dc.w $A880
                dc.w $9500 ! ((grp_7A280 / 2) & $00FF)
                dc.w $9600 ! (((grp_7A280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_7A280 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_24_8
                dc.w $9080
                dc.w $9500 ! ((grp_185020 / 2) & $00FF)
                dc.w $9600 ! (((grp_185020 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_185020 / 2) >> 16)
                dc.w 3
                dc.w sprite_8_24
                dc.w $A890
                dc.w $9500 ! ((grp_1954C0 / 2) & $00FF)
                dc.w $9600 ! (((grp_1954C0 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_1954C0 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $98A8
                dc.w $9500 ! ((grp_CCD40 / 2) & $00FF)
                dc.w $9600 ! (((grp_CCD40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CCD40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_16
                dc.w $808C
                dc.w $9500 ! ((grp_B4B40 / 2) & $00FF)
                dc.w $9600 ! (((grp_B4B40 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_B4B40 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $A0B0
                dc.w $9500 ! ((grp_E7220 / 2) & $00FF)
                dc.w $9600 ! (((grp_E7220 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E7220 / 2) >> 16)
                dc.w 1
                dc.w sprite_8_8
                dc.w $B890
                dc.w $9500 ! ((grp_E5B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B20 / 2) >> 16)
                dc.w 1
groovy_spr_5:   dc.b   0,  7,$92,$82,$BC,$B5,$A7,$9B,$9D,$84
                                        ; DATA XREF: ROM:groovy_frame_5   o
                dc.w sprite_32_32
                dc.w $9088
                dc.w $9500 ! ((grp_17E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_17E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_17E00 / 2) >> 16)
                dc.w $10
                dc.w sprite_16_16
                dc.w $B0A8
                dc.w $9500 ! ((grp_77E00 / 2) & $00FF)
                dc.w $9600 ! (((grp_77E00 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77E00 / 2) >> 16)
                dc.w 4
                dc.w sprite_16_16
                dc.w $B098
                dc.w $9500 ! ((grp_77C80 / 2) & $00FF)
                dc.w $9600 ! (((grp_77C80 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_77C80 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $90A8
                dc.w $9500 ! ((grp_98300 / 2) & $00FF)
                dc.w $9600 ! (((grp_98300 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_98300 / 2) >> 16)
                dc.w 4
                dc.w sprite_32_8
                dc.w $9080
                dc.w $9500 ! ((grp_98280 / 2) & $00FF)
                dc.w $9600 ! (((grp_98280 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_98280 / 2) >> 16)
                dc.w 4
                dc.w sprite_8_24
                dc.w $B080
                dc.w $9500 ! ((grp_194440 / 2) & $00FF)
                dc.w $9600 ! (((grp_194440 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_194440 / 2) >> 16)
                dc.w 3
                dc.w sprite_16_8
                dc.w $A0B0
                dc.w $9500 ! ((grp_CB140 / 2) & $00FF)
                dc.w $9600 ! (((grp_CB140 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_CB140 / 2) >> 16)
                dc.w 2
                dc.w sprite_8_8
                dc.w $B890
                dc.w $9500 ! ((grp_E5B20 / 2) & $00FF)
                dc.w $9600 ! (((grp_E5B20 / 2) >> 8) & $00FF)
                dc.w $9700 ! ((grp_E5B20 / 2) >> 16)
                dc.w 1
