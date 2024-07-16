// system header files are enclosed in angle brackets
#include <stdio.h>

// custom header files are imported via a path
#include "functions-decorations.h"

int main()
{
    // C uses character arrays to represent strings.
    char name[] = "World!";

    uint8_t num1 = 7;
    uint8_t num2 = 13;

    char* fiftycharvalues[50];
    fiftycharvalues[0] = "Anorld";

    printf("Hello %s, %s\n\n", getName(name), fiftycharvalues[0]);

    // `%u` for printing an unsigned integer
    printf("%u\n", getSum(num1, num2));
}