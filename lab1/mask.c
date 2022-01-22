// This program is for the CS 4400 lab 1 session.
// Kyle Sedgwick, u1213141
// u1213141@umail.utah.edu

#include <stdio.h>

int main()
{
  unsigned int bits = 0xAABBCCDD;
  unsigned char MSB = bits >> 24;
  printf("0xAABBCCDD >> 24 = \n");
  printf("%x\n", MSB);

  // Part 1 complete.

  unsigned char shifted = bits >> 20;
  // Masking with bitwise ops:
  unsigned char shiftedMask = shifted & 00111111; // input + 6-bit mask = result
  unsigned char shiftedHex = shifted & 0x3f; // same as above, but with hexadecimal
  printf("\nshifted mask: ");
  printf("%d", shiftedMask);
  printf("\nshifted Hex: ");
  printf("%d", shiftedHex);
  printf("\n");

  // End of part 2.

  
}
