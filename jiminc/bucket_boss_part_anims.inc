; Босс-ведро: анимации частей. Индекс = байт кадра в раскладке позы (bp_part ..., frame, ...),
; 0 - часть скрыта. Читают sub_24DEF2 (создание частей) и update_bucket_boss (смена позы):
; $20(часть) = bucket_boss_part_anims[кадр]. bucket_boss_part_anim_01 - ещё и анимация шаблона части stru_25AAFC.
; Все анимации однокадровые: bucket_boss_part_anim_NN -> frame_bucket_boss_part_NN
; (кадры 45-48 - колесо, их же перебирает anim_car_tire_2).
bucket_boss_part_anims:
                dc.l 0, bucket_boss_part_anim_01, bucket_boss_part_anim_02, bucket_boss_part_anim_03                                ; 0-3
                dc.l bucket_boss_part_anim_04, bucket_boss_part_anim_05, bucket_boss_part_anim_06, bucket_boss_part_anim_07         ; 4-7
                dc.l bucket_boss_part_anim_08, bucket_boss_part_anim_09, bucket_boss_part_anim_10, bucket_boss_part_anim_11         ; 8-11
                dc.l bucket_boss_part_anim_12, bucket_boss_part_anim_13, bucket_boss_part_anim_14, bucket_boss_part_anim_15         ; 12-15
                dc.l bucket_boss_part_anim_16, bucket_boss_part_anim_17, bucket_boss_part_anim_18, bucket_boss_part_anim_19         ; 16-19
                dc.l bucket_boss_part_anim_20, bucket_boss_part_anim_21, bucket_boss_part_anim_22, bucket_boss_part_anim_23         ; 20-23
                dc.l bucket_boss_part_anim_24, bucket_boss_part_anim_25, bucket_boss_part_anim_26, bucket_boss_part_anim_27         ; 24-27
                dc.l bucket_boss_part_anim_28, bucket_boss_part_anim_29, bucket_boss_part_anim_30, bucket_boss_part_anim_31         ; 28-31
                dc.l bucket_boss_part_anim_32, bucket_boss_part_anim_33, bucket_boss_part_anim_34, bucket_boss_part_anim_35         ; 32-35
                dc.l bucket_boss_part_anim_36, bucket_boss_part_anim_37, bucket_boss_part_anim_38, bucket_boss_part_anim_39         ; 36-39
                dc.l bucket_boss_part_anim_40, bucket_boss_part_anim_41, bucket_boss_part_anim_42, bucket_boss_part_anim_43         ; 40-43
                dc.l bucket_boss_part_anim_44, bucket_boss_part_anim_45, bucket_boss_part_anim_46, bucket_boss_part_anim_47         ; 44-47
                dc.l bucket_boss_part_anim_48, bucket_boss_part_anim_49, bucket_boss_part_anim_50, bucket_boss_part_anim_51         ; 48-51
                dc.l bucket_boss_part_anim_52, bucket_boss_part_anim_53, bucket_boss_part_anim_54, bucket_boss_part_anim_55         ; 52-55
                dc.l bucket_boss_part_anim_56, bucket_boss_part_anim_57, bucket_boss_part_anim_58, bucket_boss_part_anim_59         ; 56-59
                dc.l bucket_boss_part_anim_60, bucket_boss_part_anim_61, bucket_boss_part_anim_62, bucket_boss_part_anim_63         ; 60-63
                dc.l bucket_boss_part_anim_64, bucket_boss_part_anim_65, bucket_boss_part_anim_66, bucket_boss_part_anim_67         ; 64-67
                dc.l bucket_boss_part_anim_68, bucket_boss_part_anim_69, bucket_boss_part_anim_70, bucket_boss_part_anim_71         ; 68-71
                dc.l bucket_boss_part_anim_72, bucket_boss_part_anim_73, bucket_boss_part_anim_74, bucket_boss_part_anim_75         ; 72-75
                dc.l bucket_boss_part_anim_76, bucket_boss_part_anim_77, bucket_boss_part_anim_78, bucket_boss_part_anim_79         ; 76-79
                dc.l bucket_boss_part_anim_80, bucket_boss_part_anim_81, bucket_boss_part_anim_82, bucket_boss_part_anim_83         ; 80-83
                dc.l bucket_boss_part_anim_84                                                                                       ; 84
bucket_boss_part_anim_01:       dc.w frame_bucket_boss_part_01
                fa_end
bucket_boss_part_anim_02:       dc.w frame_bucket_boss_part_02
                fa_end
bucket_boss_part_anim_03:       dc.w frame_bucket_boss_part_03
                fa_end
bucket_boss_part_anim_04:       dc.w frame_bucket_boss_part_04
                fa_end
bucket_boss_part_anim_05:       dc.w frame_bucket_boss_part_05
                fa_end
bucket_boss_part_anim_06:       dc.w frame_bucket_boss_part_06
                fa_end
bucket_boss_part_anim_07:       dc.w frame_bucket_boss_part_07
                fa_end
bucket_boss_part_anim_08:       dc.w frame_bucket_boss_part_08
                fa_end
bucket_boss_part_anim_09:       dc.w frame_bucket_boss_part_09
                fa_end
bucket_boss_part_anim_10:       dc.w frame_bucket_boss_part_10
                fa_end
bucket_boss_part_anim_11:       dc.w frame_bucket_boss_part_11
                fa_end
bucket_boss_part_anim_12:       dc.w frame_bucket_boss_part_12
                fa_end
bucket_boss_part_anim_13:       dc.w frame_bucket_boss_part_13
                fa_end
bucket_boss_part_anim_14:       dc.w frame_bucket_boss_part_14
                fa_end
bucket_boss_part_anim_15:       dc.w frame_bucket_boss_part_15
                fa_end
bucket_boss_part_anim_16:       dc.w frame_bucket_boss_part_16
                fa_end
bucket_boss_part_anim_17:       dc.w frame_bucket_boss_part_17
                fa_end
bucket_boss_part_anim_18:       dc.w frame_bucket_boss_part_18
                fa_end
bucket_boss_part_anim_19:       dc.w frame_bucket_boss_part_19
                fa_end
bucket_boss_part_anim_20:       dc.w frame_bucket_boss_part_20
                fa_end
bucket_boss_part_anim_21:       dc.w frame_bucket_boss_part_21
                fa_end
bucket_boss_part_anim_22:       dc.w frame_bucket_boss_part_22
                fa_end
bucket_boss_part_anim_23:       dc.w frame_bucket_boss_part_23
                fa_end
bucket_boss_part_anim_24:       dc.w frame_bucket_boss_part_24
                fa_end
bucket_boss_part_anim_25:       dc.w frame_bucket_boss_part_25
                fa_end
bucket_boss_part_anim_26:       dc.w frame_bucket_boss_part_26
                fa_end
bucket_boss_part_anim_27:       dc.w frame_bucket_boss_part_27
                fa_end
bucket_boss_part_anim_28:       dc.w frame_bucket_boss_part_28
                fa_end
bucket_boss_part_anim_29:       dc.w frame_bucket_boss_part_29
                fa_end
bucket_boss_part_anim_30:       dc.w frame_bucket_boss_part_30
                fa_end
bucket_boss_part_anim_31:       dc.w frame_bucket_boss_part_31
                fa_end
bucket_boss_part_anim_32:       dc.w frame_bucket_boss_part_32
                fa_end
bucket_boss_part_anim_33:       dc.w frame_bucket_boss_part_33
                fa_end
bucket_boss_part_anim_34:       dc.w frame_bucket_boss_part_34
                fa_end
bucket_boss_part_anim_35:       dc.w frame_bucket_boss_part_35
                fa_end
bucket_boss_part_anim_36:       dc.w frame_bucket_boss_part_36
                fa_end
bucket_boss_part_anim_37:       dc.w frame_bucket_boss_part_37
                fa_end
bucket_boss_part_anim_38:       dc.w frame_bucket_boss_part_38
                fa_end
bucket_boss_part_anim_39:       dc.w frame_bucket_boss_part_39
                fa_end
bucket_boss_part_anim_40:       dc.w frame_bucket_boss_part_40
                fa_end
bucket_boss_part_anim_41:       dc.w frame_bucket_boss_part_41
                fa_end
bucket_boss_part_anim_42:       dc.w frame_bucket_boss_part_42
                fa_end
bucket_boss_part_anim_43:       dc.w frame_bucket_boss_part_43
                fa_end
bucket_boss_part_anim_44:       dc.w frame_bucket_boss_part_44
                fa_end
bucket_boss_part_anim_45:       dc.w frame_bucket_boss_part_45
                fa_end
bucket_boss_part_anim_46:       dc.w frame_bucket_boss_part_46
                fa_end
bucket_boss_part_anim_47:       dc.w frame_bucket_boss_part_47
                fa_end
bucket_boss_part_anim_48:       dc.w frame_bucket_boss_part_48
                fa_end
bucket_boss_part_anim_49:       dc.w frame_bucket_boss_part_49
                fa_end
bucket_boss_part_anim_50:       dc.w frame_bucket_boss_part_50
                fa_end
bucket_boss_part_anim_51:       dc.w frame_bucket_boss_part_51
                fa_end
bucket_boss_part_anim_52:       dc.w frame_bucket_boss_part_52
                fa_end
bucket_boss_part_anim_53:       dc.w frame_bucket_boss_part_53
                fa_end
bucket_boss_part_anim_54:       dc.w frame_bucket_boss_part_54
                fa_end
bucket_boss_part_anim_55:       dc.w frame_bucket_boss_part_55
                fa_end
bucket_boss_part_anim_56:       dc.w frame_bucket_boss_part_56
                fa_end
bucket_boss_part_anim_57:       dc.w frame_bucket_boss_part_57
                fa_end
bucket_boss_part_anim_58:       dc.w frame_bucket_boss_part_58
                fa_end
bucket_boss_part_anim_59:       dc.w frame_bucket_boss_part_59
                fa_end
bucket_boss_part_anim_60:       dc.w frame_bucket_boss_part_60
                fa_end
bucket_boss_part_anim_61:       dc.w frame_bucket_boss_part_61
                fa_end
bucket_boss_part_anim_62:       dc.w frame_bucket_boss_part_62
                fa_end
bucket_boss_part_anim_63:       dc.w frame_bucket_boss_part_63
                fa_end
bucket_boss_part_anim_64:       dc.w frame_bucket_boss_part_64
                fa_end
bucket_boss_part_anim_65:       dc.w frame_bucket_boss_part_65
                fa_end
bucket_boss_part_anim_66:       dc.w frame_bucket_boss_part_66
                fa_end
bucket_boss_part_anim_67:       dc.w frame_bucket_boss_part_67
                fa_end
bucket_boss_part_anim_68:       dc.w frame_bucket_boss_part_68
                fa_end
bucket_boss_part_anim_69:       dc.w frame_bucket_boss_part_69
                fa_end
bucket_boss_part_anim_70:       dc.w frame_bucket_boss_part_70
                fa_end
bucket_boss_part_anim_71:       dc.w frame_bucket_boss_part_71
                fa_end
bucket_boss_part_anim_72:       dc.w frame_bucket_boss_part_72
                fa_end
bucket_boss_part_anim_73:       dc.w frame_bucket_boss_part_73
                fa_end
bucket_boss_part_anim_74:       dc.w frame_bucket_boss_part_74
                fa_end
bucket_boss_part_anim_75:       dc.w frame_bucket_boss_part_75
                fa_end
bucket_boss_part_anim_76:       dc.w frame_bucket_boss_part_76
                fa_end
bucket_boss_part_anim_77:       dc.w frame_bucket_boss_part_77
                fa_end
bucket_boss_part_anim_78:       dc.w frame_bucket_boss_part_78
                fa_end
bucket_boss_part_anim_79:       dc.w frame_bucket_boss_part_79
                fa_end
bucket_boss_part_anim_80:       dc.w frame_bucket_boss_part_80
                fa_end
bucket_boss_part_anim_81:       dc.w frame_bucket_boss_part_81
                fa_end
bucket_boss_part_anim_82:       dc.w frame_bucket_boss_part_82
                fa_end
bucket_boss_part_anim_83:       dc.w frame_bucket_boss_part_83
                fa_end
bucket_boss_part_anim_84:       dc.w frame_bucket_boss_part_84
                fa_end
