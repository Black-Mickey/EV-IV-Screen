#include "header/funcs.h"

/*offsets*/
void *VRAM = (void *)0x6000000;
void *PRAM = (void *)0x5000000;
void *OAM = (void *)0x7000000;
void *volatile*DMA3SAD = (void *volatile*)0x40000D4;
void *volatile*DMA3DAD = (void *volatile*)0x40000D8;
vu32 *DMA3CNT = (vu32 *)0x40000DC;
struct task *tasks = (struct task *)0x3005090;
struct trainerdata **saveblock2 = (struct trainerdata **)0x300500C;
u8 **malloc_pointer_loc = (u8 **)0x203AB48;
struct fade_ctrl *pal_fade_control = (struct fade_ctrl *)0x2037AB8;
u8 *gfxc_pokedex_diploma_background = (u8 *)0x84147C0;
u8 *diploma_pal_1_and_2 =(u8 *)0x8415954;
u8 *lz_diploma_bg1_tilemap = (u8 *)0x84154E8;
struct obj *objects = (struct obj*)0x202063C;
u8 *box_tiles = (u8 *)0x8470D6C;
char *fcode_buffer2 = (char *)0x2021CD0;
struct pokemon *partypokemon = (struct pokemon *)0x02024284;
char *displayed_string = (char *)0x2021D18;
u8 *hand_id_loc = (u8 *)0x2039990;
struct superstate *super = (struct superstate *)0x30030F0;
u8 *pokemon_quanitity = (u8 *)0x2024029;