; Andy Asteroids, тоннель: кадр астероида по дистанции - set_scale_anim_by_dist (update_andy_asteroid) кладёт в $20(a1)
; элемент [clamp($52(a1), 0..$7FF) >> 5], индекс ограничен 47 ($BC/4). 00 - ближе всего (крупный кадр).
; Элементы 48-50 недостижимы.
andy_asteroid_scale_anims:
                dc.l anim_andy_asteroid_00, anim_andy_asteroid_00, anim_andy_asteroid_01, anim_andy_asteroid_02           ; idx 0-3
                dc.l anim_andy_asteroid_03, anim_andy_asteroid_04, anim_andy_asteroid_05, anim_andy_asteroid_06           ; idx 4-7
                dc.l anim_andy_asteroid_07, anim_andy_asteroid_08, anim_andy_asteroid_09, anim_andy_asteroid_10           ; idx 8-11
                dc.l anim_andy_asteroid_11, anim_andy_asteroid_12, anim_andy_asteroid_13, anim_andy_asteroid_14           ; idx 12-15
                dc.l anim_andy_asteroid_15, anim_andy_asteroid_16, anim_andy_asteroid_17, anim_andy_asteroid_18           ; idx 16-19
                dc.l anim_andy_asteroid_19, anim_andy_asteroid_20, anim_andy_asteroid_21, anim_andy_asteroid_22           ; idx 20-23
                dc.l anim_andy_asteroid_23, anim_andy_asteroid_24, anim_andy_asteroid_25, anim_andy_asteroid_26           ; idx 24-27
                dc.l anim_andy_asteroid_27, anim_andy_asteroid_28, anim_andy_asteroid_29, anim_andy_asteroid_30           ; idx 28-31
                dc.l anim_andy_asteroid_31, anim_andy_asteroid_32, anim_andy_asteroid_33, anim_andy_asteroid_34           ; idx 32-35
                dc.l anim_andy_asteroid_35, anim_andy_asteroid_36, anim_andy_asteroid_37, anim_andy_asteroid_38           ; idx 36-39
                dc.l anim_andy_asteroid_39, anim_andy_asteroid_40, anim_andy_asteroid_41, anim_andy_asteroid_42           ; idx 40-43
                dc.l anim_andy_asteroid_43, anim_andy_asteroid_44, anim_andy_asteroid_45, anim_andy_asteroid_46           ; idx 44-47
                dc.l anim_andy_asteroid_46, anim_andy_asteroid_47, anim_andy_asteroid_47                                  ; idx 48-50
