; Andy Asteroids, тоннель: кадр Джима на ракете (sub_247022 -> jim_anim_offset).
; Индекс = сектор*4 + фаза: сектор = jim_tunnel_angle>>10 (0..31), фаза = (frame_counter>>2)&3 - покачивание.
; Зеркалирование: is_jim_left_direction = (jim_tunnel_angle & $4000) == 0.
; Кадры: anim_jim_rocket_S_P - группа угла S, фаза P (0_0 = anim_jim_on_rocket).
jim_rocket_angle_anims:
                dc.l anim_jim_on_rocket, anim_jim_rocket_0_1, anim_jim_rocket_0_2, anim_jim_rocket_0_3                    ; сектор 0
                dc.l anim_jim_rocket_1_0, anim_jim_rocket_1_1, anim_jim_rocket_1_2, anim_jim_rocket_1_3                   ; сектор 1
                dc.l anim_jim_rocket_2_0, anim_jim_rocket_2_1, anim_jim_rocket_2_2, anim_jim_rocket_2_3                   ; сектор 2
                dc.l anim_jim_rocket_3_0, anim_jim_rocket_3_1, anim_jim_rocket_3_2, anim_jim_rocket_3_3                   ; сектор 3
                dc.l anim_jim_rocket_4_0, anim_jim_rocket_4_1, anim_jim_rocket_4_2, anim_jim_rocket_4_3                   ; сектор 4
                dc.l anim_jim_rocket_5_0, anim_jim_rocket_5_1, anim_jim_rocket_5_2, anim_jim_rocket_5_3                   ; сектор 5
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 6
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 7
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 8
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 9
                dc.l anim_jim_rocket_5_0, anim_jim_rocket_5_1, anim_jim_rocket_5_2, anim_jim_rocket_5_3                   ; сектор 10
                dc.l anim_jim_rocket_4_0, anim_jim_rocket_4_1, anim_jim_rocket_4_2, anim_jim_rocket_4_3                   ; сектор 11
                dc.l anim_jim_rocket_3_0, anim_jim_rocket_3_1, anim_jim_rocket_3_2, anim_jim_rocket_3_3                   ; сектор 12
                dc.l anim_jim_rocket_2_0, anim_jim_rocket_2_1, anim_jim_rocket_2_2, anim_jim_rocket_2_3                   ; сектор 13
                dc.l anim_jim_rocket_1_0, anim_jim_rocket_1_1, anim_jim_rocket_1_2, anim_jim_rocket_1_3                   ; сектор 14
                dc.l anim_jim_on_rocket, anim_jim_rocket_0_1, anim_jim_rocket_0_2, anim_jim_rocket_0_3                    ; сектор 15
                dc.l anim_jim_on_rocket, anim_jim_rocket_0_1, anim_jim_rocket_0_2, anim_jim_rocket_0_3                    ; сектор 16
                dc.l anim_jim_rocket_1_0, anim_jim_rocket_1_1, anim_jim_rocket_1_2, anim_jim_rocket_1_3                   ; сектор 17
                dc.l anim_jim_rocket_2_0, anim_jim_rocket_2_1, anim_jim_rocket_2_2, anim_jim_rocket_2_3                   ; сектор 18
                dc.l anim_jim_rocket_3_0, anim_jim_rocket_3_1, anim_jim_rocket_3_2, anim_jim_rocket_3_3                   ; сектор 19
                dc.l anim_jim_rocket_4_0, anim_jim_rocket_4_1, anim_jim_rocket_4_2, anim_jim_rocket_4_3                   ; сектор 20
                dc.l anim_jim_rocket_5_0, anim_jim_rocket_5_1, anim_jim_rocket_5_2, anim_jim_rocket_5_3                   ; сектор 21
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 22
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 23
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 24
                dc.l anim_jim_rocket_6_0, anim_jim_rocket_6_1, anim_jim_rocket_6_2, anim_jim_rocket_6_3                   ; сектор 25
                dc.l anim_jim_rocket_5_0, anim_jim_rocket_5_1, anim_jim_rocket_5_2, anim_jim_rocket_5_3                   ; сектор 26
                dc.l anim_jim_rocket_4_0, anim_jim_rocket_4_1, anim_jim_rocket_4_2, anim_jim_rocket_4_3                   ; сектор 27
                dc.l anim_jim_rocket_3_0, anim_jim_rocket_3_1, anim_jim_rocket_3_2, anim_jim_rocket_3_3                   ; сектор 28
                dc.l anim_jim_rocket_2_0, anim_jim_rocket_2_1, anim_jim_rocket_2_2, anim_jim_rocket_2_3                   ; сектор 29
                dc.l anim_jim_rocket_1_0, anim_jim_rocket_1_1, anim_jim_rocket_1_2, anim_jim_rocket_1_3                   ; сектор 30
                dc.l anim_jim_on_rocket, anim_jim_rocket_0_1, anim_jim_rocket_0_2, anim_jim_rocket_0_3                    ; сектор 31
