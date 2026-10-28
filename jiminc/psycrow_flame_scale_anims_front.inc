; Andy Asteroids, тоннель: кадр пламени ракеты Psy-Crow (sub_258518, object_psycrow_rocket_flame) по psycrow_scale_index
; (индекс масштаба Psy-Crow, считает set_scale_anim_by_dist в sub_2585CA). Используется при psycrow_facing_front != 0.
; anim_psycrow_flame_NN - общие с side, anim_psycrow_flame_front_NN - только здесь.
psycrow_flame_scale_anims_front:
                dc.l anim_psycrow_flame_00, anim_psycrow_flame_00, anim_psycrow_flame_00, anim_psycrow_flame_00           ; idx 0-3
                dc.l anim_psycrow_flame_00, anim_psycrow_flame_00, anim_psycrow_flame_00, anim_psycrow_flame_00           ; idx 4-7
                dc.l anim_psycrow_flame_00, anim_psycrow_flame_01, anim_psycrow_flame_02, anim_psycrow_flame_03           ; idx 8-11
                dc.l anim_psycrow_flame_04, anim_psycrow_flame_05, anim_psycrow_flame_06, anim_psycrow_flame_07           ; idx 12-15
                dc.l anim_psycrow_flame_08, anim_psycrow_flame_09, anim_psycrow_flame_front_10, anim_psycrow_flame_front_10 ; idx 16-19
                dc.l anim_psycrow_flame_front_10, anim_psycrow_flame_front_10, anim_psycrow_flame_front_10, anim_psycrow_flame_front_11 ; idx 20-23
                dc.l anim_psycrow_flame_front_12, anim_psycrow_flame_front_13, anim_psycrow_flame_front_14, anim_psycrow_flame_front_15 ; idx 24-27
                dc.l anim_psycrow_flame_front_16, anim_psycrow_flame_front_17, anim_psycrow_flame_front_18, anim_psycrow_flame_front_19 ; idx 28-31
                dc.l anim_psycrow_flame_front_20, anim_psycrow_flame_front_21, anim_psycrow_flame_front_22, anim_psycrow_flame_front_23 ; idx 32-35
                dc.l anim_psycrow_flame_front_24, anim_psycrow_flame_front_25, anim_psycrow_flame_front_26, anim_psycrow_flame_front_27 ; idx 36-39
                dc.l anim_psycrow_flame_front_27, anim_psycrow_flame_front_28, anim_psycrow_flame_front_28, anim_psycrow_flame_front_28 ; idx 40-43
                dc.l anim_psycrow_flame_front_28, anim_psycrow_flame_front_28, anim_psycrow_flame_front_28, anim_psycrow_flame_front_28 ; idx 44-47
