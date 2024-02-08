#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>

typedef struct BF
{
    const char *ptr;
} BF;

void interpretBrainfuck(const char *code);

#endif
