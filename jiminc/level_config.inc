; Описание уровней: запись $40 байт, номер записи = selectedLevelOption ($00..$1C).
; Формат и порядок макросов - src/level_config.inc.
level_config:

; ---- $00: New Junk City ----
                lvl_camera    $0000, $0200
                lvl_jim       $005E, $0197
                lvl_rnc       njc_objects_rnc, njc_graphic_rnc, njc_map_rnc
                lvl_bg_anim   dword_4E5A, $0070
                lvl_music     $05
                lvl_left_mask $00
                lvl_backmap   njc_backmap_rnc
                lvl_palette   njc_palette
                lvl_tilemap   njc_tilemap
                lvl_init      njc_level_init
                lvl_events    njc_level_events
                lvl_map_size  $015E, $0038
                lvl_scroll    njc_level_scroll
                lvl_flags     $00, 0, $37

; ---- $01: What the Heck? ----
                lvl_camera    $0010, $04A0
                lvl_jim       $006C, $0190
                lvl_rnc       wth_objects_rnc, wth_graphic_rnc, wth_map_rnc
                lvl_bg_anim   dword_4ECA, $01A4
                lvl_music     $09
                lvl_left_mask $00
                lvl_backmap   wth_backmap_rnc
                lvl_palette   wth_palette
                lvl_tilemap   wth_tilemap
                lvl_init      wth_level_init
                lvl_events    wth_level_events
                lvl_map_size  $0094, $0081
                lvl_scroll    wth_level_scroll
                lvl_flags     $00, 0, $37

; ---- $02: What the Heck? - Snowman ----
                lvl_camera    $0080, $0020
                lvl_jim       $004E, $01A9
                lvl_rnc       wth_objects_rnc, wth_graphic_rnc, wth_snw_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0F
                lvl_left_mask $00
                lvl_backmap   wth_snw_backmap_rnc
                lvl_palette   wth_snw_palette
                lvl_tilemap   wth_tilemap
                lvl_init      wth_snw_level_init
                lvl_events    wth_snw_level_events
                lvl_map_size  $0032, $0020
                lvl_scroll    wth_level_scroll
                lvl_flags     $00, 0, $37

; ---- $03: What the Heck? - Evil the Cat ----
                lvl_camera    $0030, $0000
                lvl_jim       $00B7, $01C3
                lvl_rnc       wth_objects_rnc, wth_graphic_rnc, wth_evl_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $09
                lvl_left_mask $00
                lvl_backmap   wth_evl_backmap_rnc
                lvl_palette   wth_evl_palette
                lvl_tilemap   wth_tilemap
                lvl_init      wth_evl_level_init
                lvl_events    wth_evl_level_events
                lvl_map_size  $0032, $0020
                lvl_scroll    wth_evl_level_scroll
                lvl_flags     $00, 0, $27

; ---- $04: Snot a Problem, раунд 1 ----
                lvl_camera    $0090, $0010
                lvl_jim       $0085, $0179
                lvl_rnc       snt_objects_rnc, snt_graphic_rnc, snt_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $01
                lvl_left_mask $00
                lvl_backmap   snt_backmap_rnc
                lvl_palette   snt_palette
                lvl_tilemap   snt_tilemap
                lvl_init      snt1_level_init
                lvl_events    snt_level_events
                lvl_map_size  $0030, $00C2
                lvl_scroll    snt_level_scroll
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_NO_JUMP, $27

; ---- $05: Snot a Problem, раунд 2 ----
                lvl_camera    $0090, $0010
                lvl_jim       $0085, $0179
                lvl_rnc       snt_objects_rnc, snt_graphic_rnc, snt_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $01
                lvl_left_mask $00
                lvl_backmap   snt_backmap_rnc
                lvl_palette   snt_palette
                lvl_tilemap   snt_tilemap
                lvl_init      snt2_level_init
                lvl_events    snt_level_events
                lvl_map_size  $0030, $00C2
                lvl_scroll    snt_level_scroll
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_NO_JUMP, $27

; ---- $06: Snot a Problem, раунд 3 ----
                lvl_camera    $0090, $0010
                lvl_jim       $0085, $0179
                lvl_rnc       snt_objects_rnc, snt_graphic_rnc, snt_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $01
                lvl_left_mask $00
                lvl_backmap   snt_backmap_rnc
                lvl_palette   snt_palette
                lvl_tilemap   snt_tilemap
                lvl_init      snt3_level_init
                lvl_events    snt_level_events
                lvl_map_size  $0030, $00C2
                lvl_scroll    snt_level_scroll
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_NO_JUMP, $27

; ---- $07: For Pete's Sake ----
                lvl_camera    $0010, $0000
                lvl_jim       $008C, $01AC
                lvl_rnc       pete_objects_rnc, pete_graphic_rnc, pete_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $00
                lvl_left_mask $01
                lvl_backmap   pete_backmap_rnc
                lvl_palette   pete_palette
                lvl_tilemap   pete_tilemap
                lvl_init      pete_level_init
                lvl_events    pete_level_events
                lvl_map_size  $04C9, $0010
                lvl_scroll    pete_level_scroll
                lvl_flags     $00, 0, $37

; ---- $08: Buttville - Slug for Butt ----
                lvl_camera    $0010, $01B0
                lvl_jim       $001A, $0193
                lvl_rnc       btv_objects_rnc, btv_graphic_rnc, btv_sfb_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $02
                lvl_left_mask $00
                lvl_backmap   btv_sfb_backmap_rnc
                lvl_palette   btv_sfb_palette
                lvl_tilemap   btv_tilemap
                lvl_init      btv_sfb_level_init
                lvl_events    btv_sfb_level_events
                lvl_map_size  $0189, $0030
                lvl_scroll    btv_sfb_level_scroll
                lvl_flags     $00, 0, $37

; ---- $09: Buttville - Helicopter ----
                lvl_camera    $0070, $0000
                lvl_jim       $00B0, $017F
                lvl_rnc       btv_objects_rnc, btv_graphic_rnc, btv_heli_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $12
                lvl_left_mask $00
                lvl_backmap   btv_heli_backmap_rnc
                lvl_palette   btv_heli_palette
                lvl_tilemap   btv_tilemap
                lvl_init      set_view_shift_on_helicopter_buttville
                lvl_events    btv_heli_level_events
                lvl_map_size  $0032, $00C8
                lvl_scroll    btv_heli_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0A: Level 5 - Prof's Lab ----
                lvl_camera    $0000, $02C0
                lvl_jim       $00B6, $01AF
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, lvl5_lab_map_rnc
                lvl_bg_anim   dword_506E, $0070
                lvl_music     $03
                lvl_left_mask $00
                lvl_backmap   lvl5_backmap_rnc
                lvl_palette   lvl5_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      lvl5_lab_level_init
                lvl_events    lvl5_lab_level_events
                lvl_map_size  $012E, $003C
                lvl_scroll    lvl5_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0B: Level 5 - Chicken boss ----
                lvl_camera    $0000, $0000
                lvl_jim       $00B0, $0170
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, lvl5_chi_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $12
                lvl_left_mask $00
                lvl_backmap   lvl5_chi_backmap_rnc
                lvl_palette   lvl5_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      lvl5_chi_level_init
                lvl_events    lvl5_chi_level_events
                lvl_map_size  $0032, $009C
                lvl_scroll    lvl5_chi_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0C: Level 5 - Naked Worm ----
                lvl_camera    $0010, $0000
                lvl_jim       $0067, $019C
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, lvl5_nkd_map_rnc
                lvl_bg_anim   dword_506E, $0070
                lvl_music     $03
                lvl_left_mask $00
                lvl_backmap   lvl5_backmap_rnc
                lvl_palette   lvl5_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      lvl5_nkd_level_init
                lvl_events    lvl5_nkd_level_events
                lvl_map_size  $015E, $0028
                lvl_scroll    lvl5_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0D: Intestinal Distress ----
                lvl_camera    $0010, $0B20
                lvl_jim       $0070, $01A6
                lvl_rnc       ints_objects_rnc, ints_graphic_rnc, ints_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $04
                lvl_left_mask $00
                lvl_backmap   ints_backmap_rnc
                lvl_palette   ints_palette
                lvl_tilemap   ints_tilemap
                lvl_init      ints_level_init
                lvl_events    ints_level_events
                lvl_map_size  $004B, $00C2
                lvl_scroll    ints_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0E: Down the Tubes - Sea tunnels ----
                lvl_camera    $0020, $0000
                lvl_jim       $00BC, $0120
                lvl_rnc       dwn_objects_rnc, dwn_graphic_rnc, dwn_sea_map_rnc
                lvl_bg_anim   dword_50DE, $009A
                lvl_music     $03
                lvl_left_mask $01
                lvl_backmap   dwn_backmap_rnc
                lvl_palette   dwn_palette
                lvl_tilemap   dwn_tilemap
                lvl_init      dwn_level_init
                lvl_events    dwn_level_events
                lvl_map_size  $012C, $0041
                lvl_scroll    dwn_level_scroll
                lvl_flags     $00, 0, $37

; ---- $0F: Down the Tubes - Pod races ----
                lvl_camera    $0000, $0000
                lvl_jim       $0079, $016F
                lvl_rnc       dwn_objects_rnc, dwn_graphic_rnc, dwn_pod_map_rnc
                lvl_bg_anim   dword_50DE, $009A
                lvl_music     $03
                lvl_left_mask $01
                lvl_backmap   dwn_backmap_rnc
                lvl_palette   dwn_palette
                lvl_tilemap   dwn_tilemap
                lvl_init      dwn_level_init
                lvl_events    dwn_level_events
                lvl_map_size  $00FF, $004B
                lvl_scroll    dwn_level_scroll
                lvl_flags     $00, 0, $37

; ---- $10: Andy Asteroids 1 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $11: Andy Asteroids 2 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_2
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $12: Andy Asteroids 3 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_3
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $13: Andy Asteroids 4 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_4
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $14: Andy Asteroids 5 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_5
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $15: Andy Asteroids 6 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_6
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $16: Andy Asteroids 7 ----
                lvl_camera    $0010, $0000
                lvl_jim       $00A0, $01D3
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, andy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $06
                lvl_left_mask $01
                lvl_backmap   andy_backmap_rnc
                lvl_palette   andy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      andy_level_init_7
                lvl_events    andy_level_update
                lvl_map_size  $0020, $0020
                lvl_scroll    andy_asteroids_tunnel_bg
                lvl_flags     $00, LVL_NO_ATTACK+LVL_FLAG_B1+LVL_FLAG_B2+LVL_FLAG_B3+LVL_TUNNEL+LVL_NO_JUMP, $37

; ---- $17: Darkness 1 ----
                lvl_camera    $0000, $0100
                lvl_jim       $004D, $01A0
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, drk1_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0D
                lvl_left_mask $00
                lvl_backmap   drk_backmap_rnc
                lvl_palette   drk_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      darkness_level_init
                lvl_events    darkness_level_update
                lvl_map_size  $0064, $0020
                lvl_scroll    darkness_level_scroll
                lvl_flags     $00, 0, $37

; ---- $18: Darkness 2 ----
                lvl_camera    $0010, $0180
                lvl_jim       $0033, $0190
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, drk2_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0D
                lvl_left_mask $00
                lvl_backmap   drk_backmap_rnc
                lvl_palette   drk_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      darkness_level_init
                lvl_events    darkness_level_update
                lvl_map_size  $0046, $0028
                lvl_scroll    darkness_level_scroll
                lvl_flags     $00, 0, $37

; ---- $19: Darkness 3 ----
                lvl_camera    $0000, $0100
                lvl_jim       $004F, $019D
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, drk3_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0D
                lvl_left_mask $00
                lvl_backmap   drk_backmap_rnc
                lvl_palette   drk_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      darkness_level_init
                lvl_events    darkness_level_update
                lvl_map_size  $0032, $0020
                lvl_scroll    darkness_level_scroll
                lvl_flags     $00, 0, $37

; ---- $1A: Darkness 4 ----
                lvl_camera    $0010, $0110
                lvl_jim       $0026, $0190
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, drk4_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0D
                lvl_left_mask $00
                lvl_backmap   drk_backmap_rnc
                lvl_palette   drk_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      darkness_level_init
                lvl_events    darkness_level_update
                lvl_map_size  $0032, $0023
                lvl_scroll    darkness_level_scroll
                lvl_flags     $00, 0, $37

; ---- $1B: Darkness 5 ----
                lvl_camera    $0010, $0040
                lvl_jim       $002A, $0196
                lvl_rnc       lvl5_objects_rnc, lvl5_graphic_rnc, drk5_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $0D
                lvl_left_mask $00
                lvl_backmap   drk_backmap_rnc
                lvl_palette   drk_palette
                lvl_tilemap   lvl5_tilemap
                lvl_init      darkness_level_init
                lvl_events    darkness_level_update
                lvl_map_size  $0091, $0020
                lvl_scroll    darkness_level_scroll
                lvl_flags     $00, 0, $37

; ---- $1C: Psy-Crow ----
                lvl_camera    $0000, $0000
                lvl_jim       $00B0, $0190
                lvl_rnc       andy_objects_rnc, andy_graphic_rnc, psy_map_rnc
                lvl_bg_anim   0, $0000
                lvl_music     $14
                lvl_left_mask $00
                lvl_backmap   andy_backmap_rnc
                lvl_palette   psy_palette
                lvl_tilemap   andy_tilemap
                lvl_init      psy_level_init
                lvl_events    psy_level_events
                lvl_map_size  $0032, $0010
                lvl_scroll    psy_level_scroll
                lvl_flags     $00, 0, $37
