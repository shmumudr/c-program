#include <stdio.h>
#include "header.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("this code for: %s Brainfuck_code\n", argv[0]);
        return 1;
    }

    interpretBrainfuck(argv[1]);

    return 0;
}
