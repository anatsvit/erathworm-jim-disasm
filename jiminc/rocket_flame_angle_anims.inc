; Andy Asteroids, тоннель: кадр пламени ракеты Джима (sub_258C50, object_rocket_flame; видно только при andy_boost_active).
; Индекс = сектор*4 + фаза: сектор = jim_tunnel_angle>>10 (0..31), фаза = rocket_flame_anim_frame/2 (0..2, мерцание).
; 4-й элемент каждой строки кодом не выбирается (заполнитель). Кадры: anim_rocket_flame_S_P - группа угла S, фаза P.
rocket_flame_angle_anims:
                dc.l anim_rocket_flame_0_0, anim_rocket_flame_0_1, anim_rocket_flame_0_2, anim_rocket_flame_0_1           ; сектор 0
                dc.l anim_rocket_flame_1_0, anim_rocket_flame_1_1, anim_rocket_flame_1_2, anim_rocket_flame_1_1           ; сектор 1
                dc.l anim_rocket_flame_2_0, anim_rocket_flame_2_1, anim_rocket_flame_2_2, anim_rocket_flame_2_1           ; сектор 2
                dc.l anim_rocket_flame_3_0, anim_rocket_flame_3_1, anim_rocket_flame_3_2, anim_rocket_flame_3_1           ; сектор 3
                dc.l anim_rocket_flame_4_1, anim_rocket_flame_4_1, anim_rocket_flame_4_2, anim_rocket_flame_4_1           ; сектор 4
                dc.l anim_rocket_flame_5_0, anim_rocket_flame_5_1, anim_rocket_flame_5_2, anim_rocket_flame_5_1           ; сектор 5
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 6
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 7
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 8
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 9
                dc.l anim_rocket_flame_5_0, anim_rocket_flame_5_1, anim_rocket_flame_5_2, anim_rocket_flame_5_1           ; сектор 10
                dc.l anim_rocket_flame_4_0, anim_rocket_flame_4_1, anim_rocket_flame_4_2, anim_rocket_flame_4_1           ; сектор 11
                dc.l anim_rocket_flame_3_0, anim_rocket_flame_3_1, anim_rocket_flame_3_2, anim_rocket_flame_3_1           ; сектор 12
                dc.l anim_rocket_flame_2_0, anim_rocket_flame_2_1, anim_rocket_flame_2_2, anim_rocket_flame_2_1           ; сектор 13
                dc.l anim_rocket_flame_1_0, anim_rocket_flame_1_1, anim_rocket_flame_1_2, anim_rocket_flame_1_1           ; сектор 14
                dc.l anim_rocket_flame_0_0, anim_rocket_flame_0_1, anim_rocket_flame_0_2, anim_rocket_flame_0_1           ; сектор 15
                dc.l anim_rocket_flame_0_0, anim_rocket_flame_0_1, anim_rocket_flame_0_2, anim_rocket_flame_0_1           ; сектор 16
                dc.l anim_rocket_flame_1_0, anim_rocket_flame_1_1, anim_rocket_flame_1_2, anim_rocket_flame_1_1           ; сектор 17
                dc.l anim_rocket_flame_2_0, anim_rocket_flame_2_1, anim_rocket_flame_2_2, anim_rocket_flame_2_1           ; сектор 18
                dc.l anim_rocket_flame_3_0, anim_rocket_flame_3_1, anim_rocket_flame_3_2, anim_rocket_flame_3_1           ; сектор 19
                dc.l anim_rocket_flame_4_0, anim_rocket_flame_4_1, anim_rocket_flame_4_2, anim_rocket_flame_4_1           ; сектор 20
                dc.l anim_rocket_flame_5_0, anim_rocket_flame_5_1, anim_rocket_flame_5_2, anim_rocket_flame_5_1           ; сектор 21
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 22
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 23
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 24
                dc.l anim_rocket_flame_6_0, anim_rocket_flame_6_1, anim_rocket_flame_6_2, anim_rocket_flame_6_1           ; сектор 25
                dc.l anim_rocket_flame_5_0, anim_rocket_flame_5_1, anim_rocket_flame_5_2, anim_rocket_flame_5_1           ; сектор 26
                dc.l anim_rocket_flame_4_0, anim_rocket_flame_4_1, anim_rocket_flame_4_2, anim_rocket_flame_4_1           ; сектор 27
                dc.l anim_rocket_flame_3_0, anim_rocket_flame_3_1, anim_rocket_flame_3_2, anim_rocket_flame_3_1           ; сектор 28
                dc.l anim_rocket_flame_2_0, anim_rocket_flame_2_1, anim_rocket_flame_2_2, anim_rocket_flame_2_1           ; сектор 29
                dc.l anim_rocket_flame_1_0, anim_rocket_flame_1_1, anim_rocket_flame_1_2, anim_rocket_flame_1_1           ; сектор 30
                dc.l anim_rocket_flame_0_0, anim_rocket_flame_0_1, anim_rocket_flame_0_2, anim_rocket_flame_0_1           ; сектор 31
