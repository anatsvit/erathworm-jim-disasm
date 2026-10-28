; Курица-босс: анимации частей. Индекс = байт кадра в раскладке позы (bp_part ..., frame, ...),
; 0 - часть скрыта. Читают sub_24DD18 и lvl5_chi_level_init (создание частей) и update_chicken_boss
; (смена позы): $20(часть) = chicken_boss_part_anims[кадр]. chicken_boss_part_anim_01 - ещё и анимация
; шаблона части stru_25B33C. Все анимации однокадровые: chicken_boss_part_anim_NN -> frame_chicken_boss_part_NN.
chicken_boss_part_anims:
                dc.l 0, chicken_boss_part_anim_01, chicken_boss_part_anim_02, chicken_boss_part_anim_03                             ; 0-3
                dc.l chicken_boss_part_anim_04, chicken_boss_part_anim_05, chicken_boss_part_anim_06, chicken_boss_part_anim_07     ; 4-7
                dc.l chicken_boss_part_anim_08, chicken_boss_part_anim_09, chicken_boss_part_anim_10, chicken_boss_part_anim_11     ; 8-11
                dc.l chicken_boss_part_anim_12, chicken_boss_part_anim_13, chicken_boss_part_anim_14, chicken_boss_part_anim_15     ; 12-15
                dc.l chicken_boss_part_anim_16, chicken_boss_part_anim_17, chicken_boss_part_anim_18, chicken_boss_part_anim_19     ; 16-19
                dc.l chicken_boss_part_anim_20, chicken_boss_part_anim_21, chicken_boss_part_anim_22, chicken_boss_part_anim_23     ; 20-23
                dc.l chicken_boss_part_anim_24, chicken_boss_part_anim_25, chicken_boss_part_anim_26, chicken_boss_part_anim_27     ; 24-27
                dc.l chicken_boss_part_anim_28, chicken_boss_part_anim_29, chicken_boss_part_anim_30, chicken_boss_part_anim_31     ; 28-31
                dc.l chicken_boss_part_anim_32, chicken_boss_part_anim_33, chicken_boss_part_anim_34, chicken_boss_part_anim_35     ; 32-35
                dc.l chicken_boss_part_anim_36, chicken_boss_part_anim_37, chicken_boss_part_anim_38, chicken_boss_part_anim_39     ; 36-39
                dc.l chicken_boss_part_anim_40, chicken_boss_part_anim_41, chicken_boss_part_anim_42, chicken_boss_part_anim_43     ; 40-43
                dc.l chicken_boss_part_anim_44, chicken_boss_part_anim_45, chicken_boss_part_anim_46, chicken_boss_part_anim_47     ; 44-47
                dc.l chicken_boss_part_anim_48, chicken_boss_part_anim_49, chicken_boss_part_anim_50, chicken_boss_part_anim_51     ; 48-51
                dc.l chicken_boss_part_anim_52, chicken_boss_part_anim_53, chicken_boss_part_anim_54, chicken_boss_part_anim_55     ; 52-55
                dc.l chicken_boss_part_anim_56, chicken_boss_part_anim_57, chicken_boss_part_anim_58, chicken_boss_part_anim_59     ; 56-59
                dc.l chicken_boss_part_anim_60, chicken_boss_part_anim_61, chicken_boss_part_anim_62, chicken_boss_part_anim_63     ; 60-63
                dc.l chicken_boss_part_anim_64, chicken_boss_part_anim_65, chicken_boss_part_anim_66, chicken_boss_part_anim_67     ; 64-67
                dc.l chicken_boss_part_anim_68, chicken_boss_part_anim_69, chicken_boss_part_anim_70, chicken_boss_part_anim_71     ; 68-71
                dc.l chicken_boss_part_anim_72                                                                                      ; 72
chicken_boss_part_anim_01:      dc.w frame_chicken_boss_part_01
                fa_end
chicken_boss_part_anim_02:      dc.w frame_chicken_boss_part_02
                fa_end
chicken_boss_part_anim_03:      dc.w frame_chicken_boss_part_03
                fa_end
chicken_boss_part_anim_04:      dc.w frame_chicken_boss_part_04
                fa_end
chicken_boss_part_anim_05:      dc.w frame_chicken_boss_part_05
                fa_end
chicken_boss_part_anim_06:      dc.w frame_chicken_boss_part_06
                fa_end
chicken_boss_part_anim_07:      dc.w frame_chicken_boss_part_07
                fa_end
chicken_boss_part_anim_08:      dc.w frame_chicken_boss_part_08
                fa_end
chicken_boss_part_anim_09:      dc.w frame_chicken_boss_part_09
                fa_end
chicken_boss_part_anim_10:      dc.w frame_chicken_boss_part_10
                fa_end
chicken_boss_part_anim_11:      dc.w frame_chicken_boss_part_11
                fa_end
chicken_boss_part_anim_12:      dc.w frame_chicken_boss_part_12
                fa_end
chicken_boss_part_anim_13:      dc.w frame_chicken_boss_part_13
                fa_end
chicken_boss_part_anim_14:      dc.w frame_chicken_boss_part_14
                fa_end
chicken_boss_part_anim_15:      dc.w frame_chicken_boss_part_15
                fa_end
chicken_boss_part_anim_16:      dc.w frame_chicken_boss_part_16
                fa_end
chicken_boss_part_anim_17:      dc.w frame_chicken_boss_part_17
                fa_end
chicken_boss_part_anim_18:      dc.w frame_chicken_boss_part_18
                fa_end
chicken_boss_part_anim_19:      dc.w frame_chicken_boss_part_19
                fa_end
chicken_boss_part_anim_20:      dc.w frame_chicken_boss_part_20
                fa_end
chicken_boss_part_anim_21:      dc.w frame_chicken_boss_part_21
                fa_end
chicken_boss_part_anim_22:      dc.w frame_chicken_boss_part_22
                fa_end
chicken_boss_part_anim_23:      dc.w frame_chicken_boss_part_23
                fa_end
chicken_boss_part_anim_24:      dc.w frame_chicken_boss_part_24
                fa_end
chicken_boss_part_anim_25:      dc.w frame_chicken_boss_part_25
                fa_end
chicken_boss_part_anim_26:      dc.w frame_chicken_boss_part_26
                fa_end
chicken_boss_part_anim_27:      dc.w frame_chicken_boss_part_27
                fa_end
chicken_boss_part_anim_28:      dc.w frame_chicken_boss_part_28
                fa_end
chicken_boss_part_anim_29:      dc.w frame_chicken_boss_part_29
                fa_end
chicken_boss_part_anim_30:      dc.w frame_chicken_boss_part_30
                fa_end
chicken_boss_part_anim_31:      dc.w frame_chicken_boss_part_31
                fa_end
chicken_boss_part_anim_32:      dc.w frame_chicken_boss_part_32
                fa_end
chicken_boss_part_anim_33:      dc.w frame_chicken_boss_part_33
                fa_end
chicken_boss_part_anim_34:      dc.w frame_chicken_boss_part_34
                fa_end
chicken_boss_part_anim_35:      dc.w frame_chicken_boss_part_35
                fa_end
chicken_boss_part_anim_36:      dc.w frame_chicken_boss_part_36
                fa_end
chicken_boss_part_anim_37:      dc.w frame_chicken_boss_part_37
                fa_end
chicken_boss_part_anim_38:      dc.w frame_chicken_boss_part_38
                fa_end
chicken_boss_part_anim_39:      dc.w frame_chicken_boss_part_39
                fa_end
chicken_boss_part_anim_40:      dc.w frame_chicken_boss_part_40
                fa_end
chicken_boss_part_anim_41:      dc.w frame_chicken_boss_part_41
                fa_end
chicken_boss_part_anim_42:      dc.w frame_chicken_boss_part_42
                fa_end
chicken_boss_part_anim_43:      dc.w frame_chicken_boss_part_43
                fa_end
chicken_boss_part_anim_44:      dc.w frame_chicken_boss_part_44
                fa_end
chicken_boss_part_anim_45:      dc.w frame_chicken_boss_part_45
                fa_end
chicken_boss_part_anim_46:      dc.w frame_chicken_boss_part_46
                fa_end
chicken_boss_part_anim_47:      dc.w frame_chicken_boss_part_47
                fa_end
chicken_boss_part_anim_48:      dc.w frame_chicken_boss_part_48
                fa_end
chicken_boss_part_anim_49:      dc.w frame_chicken_boss_part_49
                fa_end
chicken_boss_part_anim_50:      dc.w frame_chicken_boss_part_50
                fa_end
chicken_boss_part_anim_51:      dc.w frame_chicken_boss_part_51
                fa_end
chicken_boss_part_anim_52:      dc.w frame_chicken_boss_part_52
                fa_end
chicken_boss_part_anim_53:      dc.w frame_chicken_boss_part_53
                fa_end
chicken_boss_part_anim_54:      dc.w frame_chicken_boss_part_54
                fa_end
chicken_boss_part_anim_55:      dc.w frame_chicken_boss_part_55
                fa_end
chicken_boss_part_anim_56:      dc.w frame_chicken_boss_part_56
                fa_end
chicken_boss_part_anim_57:      dc.w frame_chicken_boss_part_57
                fa_end
chicken_boss_part_anim_58:      dc.w frame_chicken_boss_part_58
                fa_end
chicken_boss_part_anim_59:      dc.w frame_chicken_boss_part_59
                fa_end
chicken_boss_part_anim_60:      dc.w frame_chicken_boss_part_60
                fa_end
chicken_boss_part_anim_61:      dc.w frame_chicken_boss_part_61
                fa_end
chicken_boss_part_anim_62:      dc.w frame_chicken_boss_part_62
                fa_end
chicken_boss_part_anim_63:      dc.w frame_chicken_boss_part_63
                fa_end
chicken_boss_part_anim_64:      dc.w frame_chicken_boss_part_64
                fa_end
chicken_boss_part_anim_65:      dc.w frame_chicken_boss_part_65
                fa_end
chicken_boss_part_anim_66:      dc.w frame_chicken_boss_part_66
                fa_end
chicken_boss_part_anim_67:      dc.w frame_chicken_boss_part_67
                fa_end
chicken_boss_part_anim_68:      dc.w frame_chicken_boss_part_68
                fa_end
chicken_boss_part_anim_69:      dc.w frame_chicken_boss_part_69
                fa_end
chicken_boss_part_anim_70:      dc.w frame_chicken_boss_part_70
                fa_end
chicken_boss_part_anim_71:      dc.w frame_chicken_boss_part_71
                fa_end
chicken_boss_part_anim_72:      dc.w frame_chicken_boss_part_72
                fa_end
