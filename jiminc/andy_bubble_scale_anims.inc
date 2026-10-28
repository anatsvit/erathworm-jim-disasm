; Andy Asteroids, тоннель: кадр пузыря по дистанции - set_scale_anim_by_dist (update_andy_bubble) кладёт в $20(a1)
; элемент [clamp($52(a1), 0..$7FF) >> 5], индекс ограничен 47 ($BC/4). 00 - ближе всего (крупный кадр).
; Элементы 48-50 недостижимы.
andy_bubble_scale_anims:
                dc.l anim_andy_bubble_00, anim_andy_bubble_01, anim_andy_bubble_02, anim_andy_bubble_03                   ; idx 0-3
                dc.l anim_andy_bubble_04, anim_andy_bubble_05, anim_andy_bubble_06, anim_andy_bubble_07                   ; idx 4-7
                dc.l anim_andy_bubble_08, anim_andy_bubble_09, anim_andy_bubble_10, anim_andy_bubble_11                   ; idx 8-11
                dc.l anim_andy_bubble_12, anim_andy_bubble_13, anim_andy_bubble_14, anim_andy_bubble_15                   ; idx 12-15
                dc.l anim_andy_bubble_16, anim_andy_bubble_17, anim_andy_bubble_18, anim_andy_bubble_19                   ; idx 16-19
                dc.l anim_andy_bubble_20, anim_andy_bubble_21, anim_andy_bubble_22, anim_andy_bubble_23                   ; idx 20-23
                dc.l anim_andy_bubble_24, anim_andy_bubble_25, anim_andy_bubble_26, anim_andy_bubble_27                   ; idx 24-27
                dc.l anim_andy_bubble_28, anim_andy_bubble_29, anim_andy_bubble_30, anim_andy_bubble_31                   ; idx 28-31
                dc.l anim_andy_bubble_32, anim_andy_bubble_33, anim_andy_bubble_34, anim_andy_bubble_35                   ; idx 32-35
                dc.l anim_andy_bubble_36, anim_andy_bubble_37, anim_andy_bubble_38, anim_andy_bubble_39                   ; idx 36-39
                dc.l anim_andy_bubble_40, anim_andy_bubble_41, anim_andy_bubble_42, anim_andy_bubble_43                   ; idx 40-43
                dc.l anim_andy_bubble_44, anim_andy_bubble_45, anim_andy_bubble_46, anim_andy_bubble_47                   ; idx 44-47
                dc.l anim_andy_bubble_47, anim_andy_bubble_47, anim_andy_bubble_47                                        ; idx 48-50
