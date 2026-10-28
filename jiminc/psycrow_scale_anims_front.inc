; Andy Asteroids, тоннель: кадр Psy-Crow по дистанции - set_scale_anim_by_dist (sub_2585CA) кладёт в $20(a1)
; элемент [clamp($52(a1), 0..$7FF) >> 5], индекс ограничен 47 ($BC/4). 00 - ближе всего (крупный кадр).
; Используется, когда psycrow_facing_front != 0 (abs(jim_tunnel_angle-$50(a1)) < $800), иначе psycrow_scale_anims_side.
; anim_psycrow_NN - общие с side, anim_psycrow_front_NN - только здесь.
psycrow_scale_anims_front:
                dc.l anim_psycrow_00, anim_psycrow_01, anim_psycrow_02, anim_psycrow_03                                   ; idx 0-3
                dc.l anim_psycrow_04, anim_psycrow_05, anim_psycrow_06, anim_psycrow_07                                   ; idx 4-7
                dc.l anim_psycrow_08, anim_psycrow_09, anim_psycrow_10, anim_psycrow_11                                   ; idx 8-11
                dc.l anim_psycrow_12, anim_psycrow_13, anim_psycrow_14, anim_psycrow_15                                   ; idx 12-15
                dc.l anim_psycrow_16, anim_psycrow_17, anim_psycrow_front_18, anim_psycrow_front_19                       ; idx 16-19
                dc.l anim_psycrow_front_20, anim_psycrow_front_21, anim_psycrow_front_22, anim_psycrow_front_23           ; idx 20-23
                dc.l anim_psycrow_front_24, anim_psycrow_front_25, anim_psycrow_front_26, anim_psycrow_front_27           ; idx 24-27
                dc.l anim_psycrow_front_28, anim_psycrow_front_29, anim_psycrow_front_30, anim_psycrow_front_31           ; idx 28-31
                dc.l anim_psycrow_front_32, anim_psycrow_front_33, anim_psycrow_front_34, anim_psycrow_front_35           ; idx 32-35
                dc.l anim_psycrow_front_36, anim_psycrow_front_37, anim_psycrow_front_38, anim_psycrow_front_39           ; idx 36-39
                dc.l anim_psycrow_front_40, anim_psycrow_front_41, anim_psycrow_front_42, anim_psycrow_front_42           ; idx 40-43
                dc.l anim_psycrow_front_42, anim_psycrow_front_42, anim_psycrow_front_42, anim_psycrow_front_42           ; idx 44-47
