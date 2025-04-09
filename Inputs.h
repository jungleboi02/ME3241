// Inputs.h inlcudes inputs
#ifndef INPUTS_H
#define INPUTS_H

// display (REG_DISPCNT) defines
#define BG0_ENABLE		 0x100
#define BG1_ENABLE		 0x200
#define BG2_ENABLE		 0x400
#define BG3_ENABLE		 0x800
#define OBJ_ENABLE		 0x1000
#define WIN0_ENABLE		 0x2000
#define WIN1_ENABLE		 0x4000
#define WINOBJ_ENABLE	 0x8000
#define BACK_BUFFER_FLAG 0x10
#define H_BLANK_OAM      0x20
#define OBJ_MAP_2D       0x0
#define OBJ_MAP_1D       0x40
#define FORCE_BLANK      0x80

// video modes
#define MODE0			0x0
#define MODE1			0x1
#define MODE2			0x2
#define MODE3			0x3
#define MODE4			0x4
#define MODE5			0x5

// input defines
#define KEY_MASK   0x3FF
#define KEY_A      0x001
#define KEY_B      0x002
#define KEY_SELECT 0x004
#define KEY_START  0x008
#define KEY_RIGHT  0x010
#define KEY_LEFT   0x020
#define KEY_UP     0x040
#define KEY_DOWN   0x080
#define KEY_R      0x100
#define KEY_L      0x200

// some structs
typedef void (*fp)(void);

// helper macros
#define RGB(r, g, b)               ((r) + (g<<5) + (b<<10))
#define SCANLINE_COUNTER           (*(volatile u16*)0x4000006)
#define INPUT                      (KEY_MASK & (~REG_KEYS))
#define spriteData                 ((unsigned short *) 0x6010000)
#define spritePal                  ((unsigned short *) 0x5000200)
#define REG_INT                    (*(unsigned int*)0x3007FFC)
#endif	
