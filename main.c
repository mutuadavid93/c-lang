// system header files are enclosed in angle brackets
#include <stdio.h>

// custom header files are imported via a path
#include "functions.h"

int main()
{
    // C uses character arrays to represent strings.
    char name[] = "World!";

    printf("Hello %s\n", getName(name));
}

// function definition => function implementation
char* getName(char name[]) {
    return name;
}