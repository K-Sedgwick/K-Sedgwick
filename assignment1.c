// This assignment solution was created for CS4400 assignment 1: The GameBoy emulator
// Author: Kyle Sedgwick (u1213141)
// email: u1213141@umail.utah.edu

#include <stdint.h>
#include <stdio.h>

uint8_t getLow(uint16_t reg){
  uint16_t temp_reg = reg >> 8; // clear the larger bits
  return  (uint8_t) temp_reg; // Truncate and return.
}

typedef struct Registers{
  uint16_t af, bc, de, hl, sp;
} Registers;


uint16_t stepHomeworkInstruction(void* mem, struct Registers* regs, uint16_t* pc,
    uint8_t(*readMemory)(void*, uint16_t), void(*writeMemory)(void*, uint16_t, uint8_t)){

  uint8_t opcode = readMemory(mem, *pc);
  return 0;
}
