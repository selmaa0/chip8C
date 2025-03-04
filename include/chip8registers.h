#ifndef CHIP8_REGISTERS
#define CHIP8_REGISTERS

#include "config.h"

struct chip8_registers{
    unsigned char V[CHIP8_TOTAL_DATAREGISTERS];
    unsigned short I;
    unsigned char sound_timer;
    unsigned char delay_timer;
    unsigned short PC;
    unsigned char SP;
};

#endif