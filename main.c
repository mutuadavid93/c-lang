// system header files are enclosed in angle brackets
#include <stdio.h>

// custom header files are imported via a path
#include "functions-decorations.h"

int main()
{
    // C uses character arrays to represent strings.
    char name[] = "World!";

    char str[][16] = {"David", "Tom", "Emmanuella"};

    uint8_t num1 = 7;
    uint8_t num2 = 13;

    char *fiftycharvalues[50];
    fiftycharvalues[0] = "Anorld";

    int count = sizeof(str) / sizeof(str[0]);

    // loops
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", str[i]);
    }

    printf("Hello %s, %s\n\n", getName(name), fiftycharvalues[0]);

    // `%u` for printing an unsigned integer
    printf("%u\n", getSum(num1, num2));
}