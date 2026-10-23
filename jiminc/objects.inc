stru_25A634:    dc.b $85                ; obj_id
                                        ; DATA XREF: spawn_jim_object+6   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_idle      ; anim_address
                dc.b $14                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A64C:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_259DFE+AE   o
                dc.b 0                  ; health ; on sega logo
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $E000              ; sprite_attr
                dc.l anim_jim_strong    ; anim_address
                dc.b $14                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A664:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AE01A   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $E000              ; sprite_attr
                dc.l anim_explosion     ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A67C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001ADFC2   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $E000              ; sprite_attr
                dc.l anim_sparks        ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_spacesuit:    dc.b $69                ; obj_id
                                        ; DATA XREF: spawn_spacesuit   o
                                        ; collision_with_fan+9E   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC396        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_spacesuit     ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_groovy:  dc.b $86                ; obj_id
                                        ; DATA XREF: show_groovy_screen+86   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_groovy        ; anim_address
                dc.b $A                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
                dc.b $86                ; obj_id
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_plasma_shot   ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521C2         ; update_proc
object_plasma_shot:    dc.b $95                ; obj_id
                                        ; DATA XREF: ROM:001AE1FE   o
                                        ; ROM:001AE7B4   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_plasma_shot   ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521C2         ; update_proc
object_gunfire:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AE7E8   o
                                        ; ROM:001AE878   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_gunfire       ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521C2         ; update_proc
stru_25A70C:    dc.b $86                ; obj_id
                                        ; DATA XREF: jim_fire+260   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_gunfire_2     ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A724:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AE80A   o
                                        ; ROM:001AE89A   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3A70        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_shell_casing  ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A73C:    dc.b $7B                ; obj_id
                                        ; DATA XREF: jim_fire:loc_245FA6   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_air_part      ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521C2         ; update_proc
stru_25A754:    dc.b $7B                ; obj_id
                                        ; DATA XREF: jim_fire+164   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_air_part_2    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521C2         ; update_proc
stru_25A76C:    dc.b $6D                ; obj_id
                                        ; DATA XREF: sub_250842   o
                                        ; sub_25084E   o ...
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A44C2        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_air_part_3    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A784:    dc.b $6D                ; obj_id
                                        ; DATA XREF: sub_250836   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4520        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_air_part_4    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A79C:    dc.b $6D                ; obj_id
                                        ; DATA XREF: ROM:001B0C66   o
                dc.b 0                  ; health
                dc.b $81                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4510        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn      ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A7B4:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_chain_fire_to_right   o
                                        ; spawn_chain_fire_to_left   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn_2    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_hook:    dc.b $A                 ; obj_id
                                        ; DATA XREF: spawn_hook   o
                                        ; spawn_hook_2   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_hook_briliance; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A7E4:    dc.b $B                 ; obj_id
                                        ; DATA XREF: spawn_valve_gifter   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_hook_briliance; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_run_here:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_run_here   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_run_here      ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A814:    dc.b $87                ; obj_id
                                        ; DATA XREF: draw_funchar_text:loc_24C79E   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $A000              ; sprite_attr
                dc.l off_0              ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
                dc.b $86                ; obj_id
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_0              ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A844:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AE576   o
                                        ; ROM:001AE59E   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_dust          ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_whip_air_fx:    dc.b $90                ; obj_id
                                        ; DATA XREF: ROM:001AED20   o
                                        ; ROM:001AED82   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_whip_air_fx   ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A874:    dc.b $91                ; obj_id
                                        ; DATA XREF: ROM:001B1D98   o
                                        ; ROM:001B1DB2   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_air_fx        ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A88C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001A4060   o
                                        ; ROM:001A4070   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_dust_2        ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_small_explode:    dc.b $8A                ; obj_id
                                        ; DATA XREF: ROM:001A3EDC   o
                                        ; ROM:001A3EEC   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_bullet_explode; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_spiral_explode:    dc.b $8A                ; obj_id
                                        ; DATA XREF: ROM:001A4FDE   o
                                        ; ROM:001A5012   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_spiral_explode; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A8D4:    dc.b $4E                ; obj_id
                                        ; DATA XREF: ROM:001A5614   o
                                        ; ROM:001A563C   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_explosion_sparks; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A8EC:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B3F8E   o
                                        ; ROM:001B3F9E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_sparks_2      ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A904:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001A39B8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_explosion_2   ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A91C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AF04A   o
                                        ; ROM:001AF07A   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3FD4        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_rock          ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A934:    dc.b $4D                ; obj_id
                                        ; DATA XREF: ROM:001A2B7A   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4616        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_anvil         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_health_atom:    dc.b $86                ; obj_id
                                        ; DATA XREF: drop_health_atom_from_a2+16   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3396        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_health_atom   ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A964:    dc.b $51                ; obj_id
                                        ; DATA XREF: spawn_hp_atom_conditionally:spawn_hp_atom   o
                                        ; ROM:prize_faucet_objects_table   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A33E4        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_health_atom   ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A97C:    dc.b $52                ; obj_id
                                        ; DATA XREF: spawn_hp_molecule_conditionally:spawn_hp_molecule   o
                                        ; ROM:0025562C   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_health_molecule; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A994:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24DBCC+36   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC8CA        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_stars         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A9AC:    dc.b $50                ; obj_id
                                        ; DATA XREF: spawn_live+A   o
                                        ; ROM:00255634   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_live          ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_gun:    dc.b $53                ; obj_id
                                        ; DATA XREF: spawn_gun_conditionally:spawn_gun   o
                                        ; fire_to_chicken_fly_boss+38   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_gun           ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A9DC:    dc.b $54                ; obj_id
                                        ; DATA XREF: spawn_plasma_gun_conditionally+14   o
                                        ; sub_254CB2+7C   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_plasma_gun    ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25A9F4:    dc.b $4F                ; obj_id
                                        ; DATA XREF: spawn_continue_conditionally:spawn_continue   o
                                        ; spawn_continue_actived   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_continue      ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_car_tire:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_flying_car_tire+10   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_car_tire      ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
                dc.b $8F                ; obj_id
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_car_tire_2    ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AA3C:    dc.b $29                ; obj_id
                                        ; DATA XREF: spawn_cow+A   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_cow           ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l cow_launch         ; update_proc
stru_25AA54:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_minicow_to_right+1A   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC804        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_cow_mini      ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AA6C:    dc.b $5E                ; obj_id
                                        ; DATA XREF: spawn_funicular_to_left_down   o
                                        ; spawn_funicular_to_right_down   o ...
                dc.b 0                  ; health
                dc.b $B1                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_funicular     ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l funicular_end_falling         ; update_proc
stru_25AA84:    dc.b $19                ; obj_id
                                        ; DATA XREF: chuck_boss_magnet:loc_25633A   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_box           ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l box_on_magnet         ; update_proc
stru_25AA9C:    dc.b $15                ; obj_id
                                        ; DATA XREF: chuck_boss_magnet+3C   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_saxophone     ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l saxophone_on_magnet         ; update_proc
object_magnet:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24DCB2+4E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_magnet        ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l chuck_boss_magnet         ; update_proc
object_chuck_boss:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24DCB2+26   o
                dc.b 5                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC600        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_boss_chuck    ; anim_address
                dc.b $E                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AAE4:    dc.b $6F                ; obj_id
                                        ; DATA XREF: ROM:001ADB62   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4104        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_chuck_fish    ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AAFC:    dc.b $8D                ; obj_id
                                        ; DATA XREF: sub_24DEF2:loc_24DF84   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_bucket        ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AB14:    dc.b $14                ; obj_id
                                        ; DATA XREF: sub_24DEF2+54   o
                dc.b $A                 ; health ; Что-то связанное с боссом ведром на NJC
                dc.b $21                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A282A        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown       ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2522D0         ; update_proc
stru_25AB2C:    dc.b $2C                ; obj_id
                                        ; DATA XREF: spawn_fridge+A   o
                dc.b 2                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_fridge        ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l fridge_fall         ; update_proc
stru_25AB44:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_tree_trampoline   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_tree_trampoline; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_dog:    dc.b 2                  ; obj_id
                                        ; DATA XREF: spawn_dog   o
                dc.b 3                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_dog           ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2521EA         ; update_proc
stru_25AB74:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B35B6   o
                                        ; ROM:001B35EC   o ...
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_rotate_egg    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AB8C:    dc.b $3F                ; obj_id
                                        ; DATA XREF: njc_level_events+FC   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4006        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_faucet        ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ABA4:    dc.b $15                ; obj_id
                                        ; DATA XREF: oksub_25655C+8   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4092        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_saxophone     ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ABBC:    dc.b $3E                ; obj_id
                                        ; DATA XREF: spawn_crow   o
                dc.b 1                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A41D0        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_crow          ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ABD4:    dc.b 5                  ; obj_id
                                        ; DATA XREF: spawn_crow_dragging+E   o
                dc.b 2                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A41D0        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_crow          ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ABEC:    dc.b $86                ; obj_id
                                        ; DATA XREF: crow_plumage_create+8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4266        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_crow_plumage  ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC04:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_256114+8   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3A70        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_crow_beak     ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC1C:    dc.b $D                 ; obj_id
                                        ; DATA XREF: spawn_gates_chain_mechanism   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_chain_mechanism; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC34:    dc.b $E                 ; obj_id
                                        ; DATA XREF: spawn_hell_gates   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_hell_gates    ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_257224         ; update_proc
stru_25AC4C:    dc.b $7C                ; obj_id
                                        ; DATA XREF: spawn_jump_spring   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown_2     ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC64:    dc.b $86                ; obj_id
                                        ; DATA XREF: wth_snw_level_init+28   o
                dc.b $96                ; health
                dc.b 1                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_boss_snowman  ; anim_address
                dc.b $F                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC7C:    dc.b $2E                ; obj_id
                                        ; DATA XREF: ROM:001B586E   o
                                        ; ROM:001B588E   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC7FC        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_snowman_bullet; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AC94:    dc.b $86                ; obj_id
                                        ; DATA XREF: fire_to_snowman_boss+6C   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snowman_burp  ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ACAC:    dc.b $86                ; obj_id
                                        ; DATA XREF: wth_snw_level_events+76   o
                                        ; whip_to_snowman_boss+2A   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snowman_parts ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ACC4:    dc.b $86                ; obj_id
                                        ; DATA XREF: fire_to_snowman_boss+D2   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snowman_hat   ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ACDC:    dc.b $2F                ; obj_id
                                        ; DATA XREF: spawn_lawyer   o
                dc.b 3                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_lawyer        ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_259802         ; update_proc
stru_25ACF4:    dc.b $35                ; obj_id
                                        ; DATA XREF: ROM:001B0A46   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC742        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_lawyer_papers ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD0C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B571C   o
                                        ; ROM:001B5738   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC760        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_lawyer_papers_2; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD24:    dc.b $9B                ; obj_id
                                        ; DATA XREF: ROM:001B09E2   o
                                        ; sub_254CB2+4C   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC790        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_lawyer_suitcase; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD3C:    dc.b $6E                ; obj_id
                                        ; DATA XREF: ROM:001B2CD0   o
                                        ; ROM:001B2D10   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn_3    ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD54:    dc.b $6E                ; obj_id
                                        ; DATA XREF: spawn_side_left_fire   o
                                        ; spawn_side_right_fire   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_flame         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD6C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001ACEE2   o
                                        ; ROM:001B0B9A   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_smoke         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD84:    dc.b $67                ; obj_id
                                        ; DATA XREF: ROM:001B0BB4   o
                                        ; ROM:001B0BEA   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn_4    ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AD9C:    dc.b $56                ; obj_id
                                        ; DATA XREF: spawn_run_emerald_lift_right   o
                                        ; spawn_run_emerald_lift_left   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_diamond       ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ADB4:    dc.b $5A                ; obj_id
                                        ; DATA XREF: spawn_emerald_lift   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A2EE4        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_diamond_waiting; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ADCC:    dc.b $5B                ; obj_id
                                        ; DATA XREF: wth_snw_level_events+1A   o
                                        ; spawn_run_emerald   o ...
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_diamond_2     ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25ADE4:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B3A56   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AD1B8        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_bomb          ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_stalactite:    dc.b $76                ; obj_id
                                        ; DATA XREF: spawn_stalactite+A   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AD194        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_stalactite    ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AE14:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_evil_cat_bomber+14   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown_3     ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258E3C         ; update_proc
stru_25AE2C:    dc.b $86                ; obj_id
                                        ; DATA XREF: fire_to_evil_cat_soul_boss+4E   o
                                        ; fire_to_evil_cat_soul_boss+7C   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACF6A        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_evilcat_soul  ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_25929A         ; update_proc
stru_25AE44:    dc.b $86                ; obj_id
                                        ; DATA XREF: wth_evl_level_init+24   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_evilcat_pillar; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2590A2         ; update_proc
stru_25AE5C:    dc.b $86                ; obj_id
                                        ; DATA XREF: wth_evl_level_init+52   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_evilcat       ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_259052         ; update_proc
stru_25AE74:    dc.b $47                ; obj_id
                                        ; DATA XREF: wth_evl_level_events+132   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_evilcat       ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AE8C:    dc.b $6D                ; obj_id
                                        ; DATA XREF: ROM:001ACEA0   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACEB6        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn_5    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AEA4:    dc.b $6D                ; obj_id
                                        ; DATA XREF: fire_to_evil_cat_soul_boss+CC   o
                                        ; fire_to_evil_cat_soul_boss+EC   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACEF2        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fireburn_5    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AEBC:    dc.b $2E                ; obj_id
                                        ; DATA XREF: ROM:001B3B64   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACE8A        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_snowman_bullet; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AED4:    dc.b $86                ; obj_id
                                        ; DATA XREF: wth_evl_level_init+70   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_evilcat_gun   ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258FE2         ; update_proc
stru_25AEEC:    dc.b $69                ; obj_id
                                        ; DATA XREF: wth_evl_level_init+8E   o
                                        ; wth_evl_level_init+D8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_spacesuit     ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_259030         ; update_proc
object_ropejump:dc.b $85                ; obj_id
                                        ; DATA XREF: sub_24FF38+34   o
                dc.b 0                  ; health ; На уровне Snot a problem
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_ropejumper; anim_address
                dc.b $14                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l ropejump_control   ; update_proc
stru_25AF1C:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24FF38+64   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $E000              ; sprite_attr
                dc.l anim_rope_health_bar; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_257FE8         ; update_proc
stru_25AF34:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24FF38+12C   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $A000              ; sprite_attr
                dc.l anim_rope_health_bar_2; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2580D8         ; update_proc
stru_25AF4C:    dc.b $93                ; obj_id
                                        ; DATA XREF: sub_257320+16   o
                                        ; sub_257B10+D8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_water_after_fall; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AF64:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_butt_crab_32+A6   o
                                        ; collision_with_water_monster+A0   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_legs      ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258300         ; update_proc
stru_25AF7C:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24FF38+3E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_rope          ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_257F62         ; update_proc
stru_25AF94:    dc.b $71                ; obj_id
                                        ; DATA XREF: sub_24FF38+DE   o
                dc.b $A                 ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snot_boss     ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_257B10         ; update_proc
stru_25AFAC:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24FF38+8A   o
                                        ; sub_24FF38+9C   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snot_rope     ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_257ED4         ; update_proc
object_snot_part:    dc.b $94                ; obj_id
                                        ; DATA XREF: ROM:001B10B4   o
                                        ; ROM:001B10C6   o ...
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_snot_part     ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AFDC:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_water_monster   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_water_monster ; anim_address
                dc.b $D                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25AFF4:    dc.b $83                ; obj_id
                                        ; DATA XREF: spawn_plant+8   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_4     ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B00C:    dc.b $34                ; obj_id
                                        ; DATA XREF: spawn_plant+14   o
                                        ; spawn_plant_dead   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_pete_plant    ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B024:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B564A   o
                                        ; ROM:001B565A   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_fish_jumps    ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B03C:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B566A   o
                                        ; ROM:001B567A   o ...
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_fish_jumps_2  ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B054:    dc.b $6B                ; obj_id
                                        ; DATA XREF: pete_level_events+3A   o
                                        ; pete_level_events+4E   o
                dc.b 0                  ; health
                dc.b $81                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3262        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_5     ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B06C:    dc.b $36                ; obj_id
                                        ; DATA XREF: pete_level_events+5A   o
                dc.b 0                  ; health
                dc.b $81                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A328C        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_rock_2        ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B084:    dc.b $37                ; obj_id
                                        ; DATA XREF: pete_level_events+66   o
                dc.b 0                  ; health
                dc.b $81                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A32B8        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_big_skyrock   ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B09C:    dc.b $16                ; obj_id
                                        ; DATA XREF: sub_246D12:loc_246D64   o
                                        ; pete_level_init+4E   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4660        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_pete          ; anim_address
                dc.b $13                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_256D82         ; update_proc
stru_25B0B4:    dc.b $2A                ; obj_id
                                        ; DATA XREF: spawn_ufo+18   o
                dc.b 4                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3212        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_ufo           ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_pete_hook:    dc.b $81                ; obj_id
                                        ; DATA XREF: spawn_pete_hook   o
                dc.b 0                  ; health
                dc.b $A1                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_pete_hook     ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_machine:    dc.b $38                ; obj_id
                                        ; DATA XREF: spawn_machine   o
                dc.b $C                 ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A335E        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_machine       ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_fox:    dc.b $33                ; obj_id
                                        ; DATA XREF: spawn_fox   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_fox           ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_bob_cat:    dc.b $2B                ; obj_id
                                        ; DATA XREF: spawn_bob_cat   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC640        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_bob_cat       ; anim_address
                dc.b $F                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_hamster:    dc.b $9A                ; obj_id
                                        ; DATA XREF: spawn_hamster:loc_250C58   o
                dc.b 0                  ; health
                dc.b $31                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_hamster       ; anim_address
                dc.b $15                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B144:    dc.b $59                ; obj_id
                                        ; DATA XREF: spawn_counterpoise+36   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_counterpoise  ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B15C:    dc.b $80                ; obj_id
                                        ; DATA XREF: spawn_counterpoise+2A   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_7     ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B174:    dc.b $57                ; obj_id
                                        ; DATA XREF: spawn_spring_platform+36   o
                                        ; spawn_spring_platform_2+34   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_spring_platform; anim_address
                dc.b $10                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B18C:    dc.b $7F                ; obj_id
                                        ; DATA XREF: spawn_spring_platform+2A   o
                                        ; spawn_spring_platform_2+28   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_8     ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B1A4:    dc.b $40                ; obj_id
                                        ; DATA XREF: spawn_submarine+2E   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_submarine     ; anim_address
                dc.b $1C                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $C0                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B1BC:    dc.b $96                ; obj_id
                                        ; DATA XREF: spawn_submarine+B6   o
                                        ; spawn_submarine+EA   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_unknown_9     ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $C0                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B1D4:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_submarine+52   o
                                        ; spawn_submarine+82   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_submarine_air ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $C0                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B1EC:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B13F0   o
                                        ; ROM:001B1404   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A322A        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_10    ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B204:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_diamond+590   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_ufo_signal    ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B21C:    dc.b $1E                ; obj_id
                                        ; DATA XREF: spawn_abscess_down+8   o
                                        ; spawn_abscess_left+8   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_bee_generator ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B234:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_queen_boss:loc_250AC0   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_queen_closed  ; anim_address
                dc.b $1C                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B24C:    dc.b $24                ; obj_id
                                        ; DATA XREF: spawn_queen_tail+8   o
                dc.b $32                ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_queen_tail    ; anim_address
                dc.b $1C                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B264:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B14D4   o
                                        ; ROM:001B1764   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_egg_move      ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
                dc.b $86                ; obj_id
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_queen_abscess ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B294:    dc.b $74                ; obj_id
                                        ; DATA XREF: ROM:001B14EA   o
                                        ; ROM:001B1776   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3306        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown_11    ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B2AC:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AD202   o
                dc.b 0                  ; health
                dc.b $40                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown_12    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B2C4:    dc.b $6C                ; obj_id
                                        ; DATA XREF: spawn_butt_monster   o
                dc.b 8                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_butt_monster  ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B2DC:    dc.b $39                ; obj_id
                                        ; DATA XREF: sub_24DD18+66   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_lever         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b $FF                ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B2F4:    dc.b $7D                ; obj_id
                                        ; DATA XREF: whip_to_chicken_boss_lever+9C   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3F24        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_egg_with_needles; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B30C:    dc.b $28                ; obj_id
                                        ; DATA XREF: ROM:001A529E   o
                                        ; ROM:001A532A   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A544A        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_chicken_egg   ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B324:    dc.b $28                ; obj_id
                                        ; DATA XREF: ROM:001A53B0   o
                                        ; fire_to_chicken_fly_boss+5E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A545E        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_egg_stay      ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258B50         ; update_proc
stru_25B33C:    dc.b $8E                ; obj_id
                                        ; DATA XREF: sub_24DD18:loc_24DE18   o
                                        ; lvl5_chi_level_init:loc_25020E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_eye_gate      ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B354:    dc.b $1C                ; obj_id
                                        ; DATA XREF: sub_24DD18+C2   o
                dc.b 4                  ; health
                dc.b $21                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4A0A        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_unknown_13    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_256856         ; update_proc
object_sphere_electro:    dc.b $63                ; obj_id
                                        ; DATA XREF: spawn_sphere_electro   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_unknown_14    ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B384:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_sphere_electro+28   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_sphere_energy ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B39C:    dc.b $86                ; obj_id
                                        ; DATA XREF: oksub_258DC6+8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_sphere_energy_2; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B3B4:    dc.b $86                ; obj_id
                                        ; DATA XREF: oksub_258DC6+34   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_sphere_parts  ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_electro_up_down:    dc.b $65                ; obj_id
                                        ; DATA XREF: spawn_electro_up_down   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_electro_up_down; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_bee_home:    dc.b $32                ; obj_id
                                        ; DATA XREF: spawn_bee_home   o
                dc.b 5                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_bee_home      ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_bee:    dc.b $18                ; obj_id
                                        ; DATA XREF: ROM:001B1592   o
                                        ; ROM:001B15A4   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A47A4        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_bee           ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_256672         ; update_proc
object_lever:    dc.b 6                  ; obj_id
                                        ; DATA XREF: spawn_lever   o
                                        ; spawn_lever_actived   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_lever_2       ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_eyes_generator:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_eyes_generator_closed+8   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_eyes_generator         ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_eyes_generator_active:    dc.b $48                ; obj_id
                                        ; DATA XREF: spawn_eyes_generator_active   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_eyes_generator_2         ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_monkey_head:    dc.b 3                  ; obj_id
                                        ; DATA XREF: spawn_monkey_head:loc_25104A   o
                                        ; spawn_monkey_head_2:loc_25108C   o ...
                dc.b 0                  ; health
                dc.b $A1                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_monkey_head         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_monkey_head_rotating_valve:    dc.b 4                  ; obj_id
                                        ; DATA XREF: spawn_monkey_head_rotating_valve   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_monkey_head_2         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b $FF                ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_valve:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_monkey_head_rotating_valve+2A   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_valve         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b $FF                ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_chemical_flask:    dc.b $4B                ; obj_id
                                        ; DATA XREF: ROM:001B218A   o
                                        ; ROM:001B21B0   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A39AA        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_chemical_flask         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_cage:    dc.b $60                ; obj_id
                                        ; DATA XREF: spawn_cage   o
                dc.b 0                  ; health
                dc.b $30                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_cage         ; anim_address
                dc.b $18                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_larva:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AD2C6   o
                                        ; ROM:001AD2D8   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A3F3A        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_larva         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_green_goose:    dc.b $1A                ; obj_id
                                        ; DATA XREF: spawn_green_goose   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A2E7E        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_green_goose         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_frog_trigger:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_frog_3   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_frog         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_frog_emerging_from_underground:    dc.b $98                ; obj_id
                                        ; DATA XREF: sub_258D60+24   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_frog_2         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_frog:    dc.b $42                ; obj_id
                                        ; DATA XREF: spawn_frog   o
                                        ; spawn_frog_2   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_frog_3         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_252440         ; update_proc
object_incubator:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_incubator_left   o
                                        ; spawn_incubator_right   o ...
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l off_1B1C36         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_egg_with_needles:    dc.b 8                  ; obj_id
                                        ; DATA XREF: spawn_egg_with_needles+C   o
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_egg_with_needles; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_eye:    dc.b 9                  ; obj_id
                                        ; DATA XREF: oksub_25839E+18   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_eye         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_fan:    dc.b $68                ; obj_id
                                        ; DATA XREF: spawn_fan   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_fan         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_brain:    dc.b $20                ; obj_id
                                        ; DATA XREF: spawn_brain   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_brain         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_fan_fish:    dc.b $45                ; obj_id
                                        ; DATA XREF: spawn_fan_fish   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC6E8        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_fan_fish         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_intestinal_boss:    dc.b $17                ; obj_id
                                        ; DATA XREF: sub_24DEA6+2C   o
                dc.b $14                ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_intestinal_boss         ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2522C8         ; update_proc
object_intestinal_boss_tear:    dc.b $79                ; obj_id
                                        ; DATA XREF: ROM:001AD818   o
                                        ; ROM:001AD828   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_intestinal_boss_tear         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_chips:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001AD7AA   o
                                        ; ROM:001AD7BC   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_chips         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_daemon:    dc.b $44                ; obj_id
                                        ; DATA XREF: spawn_daemon   o
                                        ; whip_to_prize_faucet+96   o
                dc.b 3                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACCFA        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_daemon         ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_bob_goldfish:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B6188   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_bob_goldfish         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_aquarium_column:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_fish_boss+16   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_aquarium_column         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_fish_boss_aquarium:    dc.b $46                ; obj_id
                                        ; DATA XREF: spawn_fish_boss+2   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_aquarium_breaking         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_sponge:    dc.b $43                ; obj_id
                                        ; DATA XREF: spawn_sponge   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACD54        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_sponge         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B69C:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_submarine+8A   o
                                        ; collision_with_submarine+B2   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACA96        ; move_script
                dc.w $E000              ; sprite_attr
                dc.l off_1B5A1C         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_sea_gate:    dc.b $3A                ; obj_id
                                        ; DATA XREF: spawn_sea_gate+8   o
                                        ; spawn_sea_gate_2+8   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_sea_gate         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_air_refiller:    dc.b $82                ; obj_id
                                        ; DATA XREF: spawn_air_refiller_99_sec+2C   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_air_refiller         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_air_bubble:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001ADA36   o
                                        ; ROM:001ADA52   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC9AA        ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_air_bubble         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_open_handler:    dc.b $3C                ; obj_id
                                        ; DATA XREF: spawn_open_handler   o
                                        ; spawn_open_handler_2   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_open_handler         ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_planet:    dc.b $86                ; obj_id
                                        ; DATA XREF: andy_level_update+136   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A45D0        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_planet         ; anim_address
                dc.b $24                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_andy_super_bubble:    dc.b $10                ; obj_id
                                        ; DATA XREF: andy_spawn_super_bubble+6   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B29E0         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l update_andy_super_bubble         ; update_proc
object_andy_speed_bubble:    dc.b $12                ; obj_id
                                        ; DATA XREF: andy_spawn_speed_bubble+1E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B2980         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l update_andy_speed_bubble         ; update_proc
object_andy_bubble:    dc.b $13                ; obj_id
                                        ; DATA XREF: andy_spawn_bubble+1E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B2A02         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l update_andy_bubble         ; update_proc
object_andy_asteroid:    dc.b 1                  ; obj_id
                                        ; DATA XREF: andy_spawn_asteroid+6   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l off_1B2A02         ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l update_andy_asteroid         ; update_proc
object_asteroid_shard:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_asteroid+3E   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l off_1B61C4         ; anim_address
                dc.b 8                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2592B6         ; update_proc
object_protective_sphere:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_247022+52   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_sphere_energy_3         ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_psycrow:    dc.b $F                 ; obj_id
                                        ; DATA XREF: andy_race_init+58   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_psyq         ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2585CA         ; update_proc
object_rocket_flame:    dc.b $86                ; obj_id
                                        ; DATA XREF: andy_race_init+BA   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B25D8         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258C50         ; update_proc
object_psycrow_rocket_flame:    dc.b $86                ; obj_id
                                        ; DATA XREF: andy_race_init+D0   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B2794         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258518         ; update_proc
object_collision_explosion:    dc.b $86                ; obj_id
                                        ; DATA XREF: collision_with_asteroid+1A   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_star         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_258A02         ; update_proc
                dc.b $85                ; obj_id
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_on_rocket         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_jim_open_door:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_jim_entering_in_darkroom   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_open_door         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_exit_door:    dc.b $62                ; obj_id
                                        ; DATA XREF: spawn_jim_exit_door   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_exit_door         ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_dark_monster:    dc.b $66                ; obj_id
                                        ; DATA XREF: spawn_dark_monster   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_dark_monster         ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_dark_enemy:    dc.b $1B                ; obj_id
                                        ; DATA XREF: spawn_dark_mini_monster   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_dark_enemy         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_gears:    dc.b $73                ; obj_id
                                        ; DATA XREF: spawn_gears   o
                                        ; spawn_gears_down   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l anim_gears         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_dark_enemy_2:    dc.b $1B                ; obj_id
                                        ; DATA XREF: spawn_dark_mini_monster_2   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A335E        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_dark_enemy_2         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2571B4         ; update_proc
object_jim_eyes_in_dark:    dc.b $86                ; obj_id
                                        ; DATA XREF: darkness_level_init+26   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_eyes_in_dark         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_256D2E         ; update_proc
object_jim_tosses_gun_up:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24B638+8C   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_jim_idle      ; anim_address
                dc.b $14                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_jim_end_screen:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+106   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACACC        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5C9C         ; anim_address
                dc.b $14                ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_princess:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+122   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l byte_1ACBE4        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_princess         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_crown:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B5B6E   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l byte_1ACC2C        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5BA4         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_gleam:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001ACC86   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l byte_1ACC2C        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5BFA         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_gleam_2:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B5D04   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5C34         ; anim_address
                dc.b 9                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_cow_end_screen:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+13E   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACB22        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5C56         ; anim_address
                dc.b $C                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_princess_land:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+15A   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACBE4        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l off_1B5ECC         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_destruction_land:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+176   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l off_1B5ED0         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B9B4:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B5EF4   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACBF6        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l off_1B5F3A         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25B9CC:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001B5F08   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACBF6        ; move_script
                dc.w $2000              ; sprite_attr
                dc.l off_1B5F3E         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_water_washes_rock:    dc.b $86                ; obj_id
                                        ; DATA XREF: ure_the_best_screen+190   o
                                        ; ure_the_best_screen+1AA   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $2000              ; sprite_attr
                dc.l off_1B5F42         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_water_after_fall:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001ACB8E   o
                                        ; ROM:001ACB9E   o ...
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_water_after_fall; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_jim_on_rocket_win:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24BBE6+26   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l byte_1AC348        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1AF7E8         ; anim_address
                dc.b $E                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_jim_on_rocket_fail:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24BBE6+34   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b $FF                ; flip_x
                dc.l byte_1AC342        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l jim_on_rocket_fail         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_continue_tin_can:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_24C4E4+22   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B5FB4         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_explosion_with_spiral:    dc.b $84                ; obj_id
                                        ; DATA XREF: oksub_2548E8+8   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B37A8         ; anim_address
                dc.b 6                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_bomb:    dc.b $86                ; obj_id
                                        ; DATA XREF: fire_to_chicken_fly_boss+78   o
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4444        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_bomb_2         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
stru_25BA8C:    dc.b $27                ; obj_id
                                        ; DATA XREF: lvl5_chi_level_init+44   o
                dc.b $13                ; health
                dc.b 0                  ; obj_flags
                dc.b $20                ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1A4F6A        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B3F46         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_256856         ; update_proc
object_prize_stars:    dc.b $86                ; obj_id
                                        ; DATA XREF: ROM:001A2DB8   o
                                        ; ROM:001A2DD2   o ...
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACE4E        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l off_1B01BC         ; anim_address
                dc.b 0                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
                dc.b $75                ; obj_id
                dc.b 0                  ; health
                dc.b 0                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l off_1B607A         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_24E764         ; update_proc
object_platform_queen_butt:    dc.b $61                ; obj_id
                                        ; DATA XREF: sub_24E6C8:loc_24E72A   o
                dc.b 0                  ; health
                dc.b $10                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l off_1B61C0         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_24E764         ; update_proc
object_moving_platform:    dc.b $61                ; obj_id
                                        ; DATA XREF: spawn_moving_platform+8   o
                                        ; spawn_moving_platform_right+8   o
                dc.b 0                  ; health
                dc.b $10                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1ACFDA        ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_moving_platform         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_psyq_boss:    dc.b $25                ; obj_id
                                        ; DATA XREF: psy_level_init   o
                dc.b 5                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC454        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_psyq_boss         ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $82                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_2592EC         ; update_proc
object_psyq_hook:    dc.b $26                ; obj_id
                                        ; DATA XREF: ROM:001B473E   o
                                        ; ROM:001B476E   o ...
                dc.b 0                  ; health
                dc.b 1                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l byte_1AC5C8        ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_psyq_hook         ; anim_address
                dc.b 1                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_advanced_home:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_advanced_home   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l anim_advanced_home         ; anim_address
                dc.b $B                 ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b $80                ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_petes_home_door:    dc.b $86                ; obj_id
                                        ; DATA XREF: spawn_petes_home_door   o
                dc.b 0                  ; health
                dc.b $20                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $6000              ; sprite_attr
                dc.l anim_petes_home_door         ; anim_address
                dc.b 2                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_intestinal_wheel:    dc.b $78                ; obj_id
                                        ; DATA XREF: ROM:001AD67E   o
                                        ; sub_259746+3A   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_intestinal_wheel         ; anim_address
                dc.b 5                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l sub_259658         ; update_proc
object_intestinal_ball:    dc.b $77                ; obj_id
                                        ; DATA XREF: sub_259746+2E   o
                dc.b 0                  ; health
                dc.b $21                ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w $4000              ; sprite_attr
                dc.l anim_intestinal_ball         ; anim_address
                dc.b 3                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 2                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l loc_2596D6         ; update_proc
object_joystick_buttons:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_259DFE+3DC   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l off_1ADC08         ; anim_address
                dc.b 7                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
object_joystick_cable:    dc.b $86                ; obj_id
                                        ; DATA XREF: sub_259DFE+3FA   o
                dc.b 0                  ; health
                dc.b 8                  ; obj_flags
                dc.b 0                  ; draw_flags
                dc.b 0                  ; skipped_1
                dc.b 0                  ; flip_x
                dc.l off_0              ; move_script
                dc.w 0                  ; sprite_attr
                dc.l off_1ADBE4         ; anim_address
                dc.b 4                  ; vram_blocks
                dc.b 0                  ; flip_y
                dc.b 0                  ; behavior_flags
                dc.b 0                  ; skipped_2
                dc.l off_0              ; update_proc
