; Andy Asteroids, тоннель: кадр Psy-Crow по дистанции - set_scale_anim_by_dist (sub_2585CA) кладёт в $20(a1)
; элемент [clamp($52(a1), 0..$7FF) >> 5], индекс ограничен 47 ($BC/4). 00 - ближе всего (крупный кадр).
; Используется, когда psycrow_facing_front = 0 (Psy-Crow не в угловой секции Джима), иначе psycrow_scale_anims_front.
; anim_psycrow_NN - общие с front, anim_psycrow_side_NN - только здесь.
psycrow_scale_anims_side:
                dc.l anim_psycrow_00, anim_psycrow_01, anim_psycrow_02, anim_psycrow_03                                   ; idx 0-3
                dc.l anim_psycrow_04, anim_psycrow_05, anim_psycrow_06, anim_psycrow_07                                   ; idx 4-7
                dc.l anim_psycrow_08, anim_psycrow_09, anim_psycrow_10, anim_psycrow_11                                   ; idx 8-11
                dc.l anim_psycrow_12, anim_psycrow_13, anim_psycrow_14, anim_psycrow_15                                   ; idx 12-15
                dc.l anim_psycrow_16, anim_psycrow_17, anim_psycrow_side_18, anim_psycrow_side_19                         ; idx 16-19
                dc.l anim_psycrow_side_20, anim_psycrow_side_21, anim_psycrow_side_22, anim_psycrow_side_23               ; idx 20-23
                dc.l anim_psycrow_side_24, anim_psycrow_side_25, anim_psycrow_side_26, anim_psycrow_side_27               ; idx 24-27
                dc.l anim_psycrow_side_28, anim_psycrow_side_29, anim_psycrow_side_30, anim_psycrow_side_31               ; idx 28-31
                dc.l anim_psycrow_side_32, anim_psycrow_side_33, anim_psycrow_side_34, anim_psycrow_side_35               ; idx 32-35
                dc.l anim_psycrow_side_36, anim_psycrow_side_37, anim_psycrow_side_38, anim_psycrow_side_39               ; idx 36-39
                dc.l anim_psycrow_side_40, anim_psycrow_side_41, anim_psyq, anim_psyq                                     ; idx 40-43
                dc.l anim_psyq, anim_psyq, anim_psyq, anim_psyq                                                           ; idx 44-47
