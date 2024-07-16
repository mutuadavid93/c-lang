
// Defining ADDITIONAL_H
// prevents multiple definition errors if the header file is included in multiple source files.
#ifndef ADDITIONAL_H
#define ADDITIONAL_H

#include <stdint.h>
// header files mainly contain decorations

// function declaration => function signature
char *getName(char name[]);

uint8_t getSum(uint8_t number1, uint8_t number2);

#endif // ADDITIONAL_H