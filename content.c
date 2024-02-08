#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void interpretBrainfuck(const char *bfCode)
{
    int arraySize = 1000;
    char *pMemory = malloc(arraySize * sizeof(char));

    BF *b = malloc(sizeof(BF));
    b->ptr = bfCode;

    while (*b->ptr != '\0')
    {
        switch (*b->ptr)
        {
        case '>':
            ++pMemory;
            break;
        case '<':
            --pMemory;
            break;
        case '+':
            (*pMemory)++;
            break;
        case '-':
            (*pMemory)--;
            break;
        case ',':
            *pMemory = getchar();
            break;
        case '.':
            printf("%c", *pMemory);
            break;
        case '[':
            if (*pMemory == 0)
            {
                while (*b->ptr != ']')
                {
                    b->ptr++;
                }
            }
            break;
        case ']':
            if (*pMemory != 0)
            {
                while (*b->ptr != '[')
                {
                    b->ptr--;
                }
            }
            break;

        default:
            break;
        }
        (b->ptr)++;
    }

    free(pMemory);
}
