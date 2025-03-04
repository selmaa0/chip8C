#ifndef CHIP8KEYBOARD_8
#define CHIP8KEYBOARD_8
#include "config.h"

#include <stdbool.h>

struct chip8keyboard
{
    bool keyboard[CHIP8_TOTAL_KEYS];
    const char* keyboard_map;
};

void chip8_keyboard_set_map(struct chip8keyboard* keyboard,const char* map);
int chip8_keyboard_map(struct chip8keyboard* keyboard, char key); //desktop key
void chip8_keyboard_down(struct chip8keyboard* keyboard, int key);
void chip8_keyboard_up(struct chip8keyboard* keyboard, int key);
bool chip8_keyboard_isdown(struct chip8keyboard* keyboard, int key);

#endif