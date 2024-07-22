#include <stdio.h>
#include <stdlib.h>

// Dynamic memory allocation
int mallocMemory()
{
    // allocate memory using malloc
    // FACT: malloc allocates uninitialized memory i.e. memory with garbage values

    int *malloc_array = (int *)malloc(sizeof(int) * 10); // 10 integers memory block

    // always check whether the memory allocation was successful first
    if (malloc_array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Each of the 10 integers assumes the int range which is between -2,147,483,648 to 2,147,483,647
    // value

    // Store a value at position 1 on the allocated memory
    malloc_array[0] = 376743;

    //
    // Store a value at position 7 on the allocated memory
    malloc_array[7] = 276744;

    // Retrieve it
    printf("The first integer is: %d\n", malloc_array[0]);

    printf("Using malloc (uninitialized):\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", malloc_array[i]); // Undefined values i.e. garbage
    }

    printf("\n");

    // Finally free the allocated memory once done
    free(malloc_array);

    return 0;
}

int callocMemory()
{
    // allocate memory and initialize to zero
    int *calloc_array = (int *)calloc(10, sizeof(int));

    if (calloc_array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Using calloc (initialized to zero):\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", calloc_array[i]); // Undefined values i.e. garbage
    }

    printf("\n");

    free(calloc_array);

    return 0;
}

void demoPointers()
{
    // Definition:
    // A pointer is a variable that holds the memory address of another variable.

    int numb = 2323;
    int *numberptr = &numb;

    // void pointer is a memory address which is generic and can hold any type of value
    // but we can always cast the pointer to a specific type
    int *address = (int *)malloc(sizeof(int));

    printf("address: %p\n", (void *)numberptr);
    printf("value: %d\n", *numberptr);

    address[0] = 6747743;
    printf("malloced_address: %p -> %d\n", address, address[0]);

    free(address);
}