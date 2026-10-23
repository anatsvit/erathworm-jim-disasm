; ------------- Level config macros -------------
; Описание уровня в jiminc/level_config.inc: запись $40 байт на уровень, номер записи = selectedLevelOption.
; Читают load_level (всё), load_level_palette (+$20), play_level_music (+$1A), sub_24AC50 (+$28).
; Записи переведены в макросы утилитой level_config_to_macros.py. Макросы надо писать
; в этом порядке - каждый кладёт свои поля по смещению, указанному в комментарии.

; биты байта +$3D (load_level раскладывает их по переменным)
LVL_NO_ATTACK equ $01           ; level_attack_enabled = 0: нельзя стрелять и бить хлыстом
LVL_FLAG_B1   equ $02           ; level_flag_bit1_off = 0 (в коде не читается)
LVL_FLAG_B2   equ $04           ; level_flag_bit2_off = 0 (в коде не читается)
LVL_FLAG_B3   equ $08           ; level_flag_bit3_off = 0 (в коде не читается)
LVL_TUNNEL    equ $10           ; is_tunnel_level: логика Andy Asteroids
LVL_NO_JUMP   equ $20           ; level_jump_enabled = 0: нельзя прыгать и зависать

; +$00: стартовая камера X, Y (camera_x/view_map_x, camera_y/view_map_y)
lvl_camera macro px, py
        dc.w px, py
        endm

; +$04: стартовая позиция Джима X, Y (jim_collider_x, jim_collider_y)
lvl_jim macro px, py
        dc.w px, py
        endm

; +$08: RNC объектов/коллизий (-> objects_map_memory, 0 - нет), +$0C: RNC тайлов (-> VRAM 0),
; +$10: RNC карты уровня (-> M68K_RAM, 0 - нет)
lvl_rnc macro objs, tiles, cmap
        dc.l objs, tiles, cmap
        endm

; +$14: кадры фоновой анимации (bg_anim_data_ptr, 0 - нет), +$18: размер данных (bg_anim_data_size)
lvl_bg_anim macro anim, alen
        dc.l anim
        dc.w alen
        endm

; +$1A: музыка уровня (номер песни GEMS, play_level_music)
lvl_music macro song
        dc.b song
        endm

; +$1B: маска левых 16 px экрана спрайтами (left_edge_mask_enabled), 0/1
lvl_left_mask macro flag
        dc.b flag
        endm

; +$1C: RNC второго плана (в VRAM $E000 - plane B; при lvl_flags planeb != 0 - $C000, plane A; 0 - нет)
lvl_backmap macro bmap
        dc.l bmap
        endm

; +$20: палитра уровня, 4 линии (level_palette_ptr)
lvl_palette macro pal
        dc.l pal
        endm

; +$24: описание тайлов карты (level_pointer)
lvl_tilemap macro tmap
        dc.l tmap
        endm

; +$28: процедура инициализации уровня (вызывается в конце load_level)
lvl_init macro proc
        dc.l proc
        endm

; +$2C: события уровня каждый кадр (level_events_proc)
lvl_events macro proc
        dc.l proc
        endm

; +$30: размер карты в блоках, ширина и высота (map_width, map_height)
lvl_map_size macro wid, hgt
        dc.w wid, hgt
        endm

; +$34: скроллинг уровня (level_scroll_proc)
lvl_scroll macro proc
        dc.l proc
        endm

; +$38: не используется (0), +$3C: карта на plane B (level_map_on_plane_b), +$3D: флаги LVL_*,
; +$3E: скорость Psy-Crow в Andy Asteroids (сумма 4 слов psycrow_base_speeds), +$3F: 0
lvl_flags macro planeb, lflags, pspeed
        dc.l 0
        dc.b planeb, lflags, pspeed, 0
        endm
