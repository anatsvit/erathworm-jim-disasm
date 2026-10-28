; Andy Asteroids, тоннель: кадр супер-пузыря по дистанции - set_scale_anim_by_dist (update_andy_super_bubble) кладёт в $20(a1)
; элемент [clamp($52(a1), 0..$7FF) >> 5], индекс ограничен 47 ($BC/4). 00 - ближе всего (крупный кадр).
; Элементы 48-55 недостижимы.
andy_super_bubble_scale_anims:
                dc.l anim_andy_super_bubble_00, anim_andy_super_bubble_01, anim_andy_super_bubble_02, anim_andy_super_bubble_02 ; idx 0-3
                dc.l anim_andy_super_bubble_03, anim_andy_super_bubble_03, anim_andy_super_bubble_04, anim_andy_super_bubble_04 ; idx 4-7
                dc.l anim_andy_super_bubble_05, anim_andy_super_bubble_05, anim_andy_super_bubble_06, anim_andy_super_bubble_06 ; idx 8-11
                dc.l anim_andy_super_bubble_07, anim_andy_super_bubble_07, anim_andy_super_bubble_08, anim_andy_super_bubble_08 ; idx 12-15
                dc.l anim_andy_super_bubble_09, anim_andy_super_bubble_09, anim_andy_super_bubble_10, anim_andy_super_bubble_10 ; idx 16-19
                dc.l anim_andy_super_bubble_11, anim_andy_super_bubble_11, anim_andy_super_bubble_12, anim_andy_super_bubble_12 ; idx 20-23
                dc.l anim_andy_super_bubble_13, anim_andy_super_bubble_13, anim_andy_super_bubble_14, anim_andy_super_bubble_14 ; idx 24-27
                dc.l anim_andy_super_bubble_15, anim_andy_super_bubble_15, anim_andy_super_bubble_16, anim_andy_super_bubble_16 ; idx 28-31
                dc.l anim_andy_super_bubble_17, anim_andy_super_bubble_17, anim_andy_super_bubble_18, anim_andy_super_bubble_18 ; idx 32-35
                dc.l anim_andy_super_bubble_19, anim_andy_super_bubble_19, anim_andy_super_bubble_20, anim_andy_super_bubble_20 ; idx 36-39
                dc.l anim_andy_super_bubble_21, anim_andy_super_bubble_21, anim_andy_super_bubble_22, anim_andy_super_bubble_22 ; idx 40-43
                dc.l anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23 ; idx 44-47
                dc.l anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23 ; idx 48-51
                dc.l anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23, anim_andy_super_bubble_23 ; idx 52-55
