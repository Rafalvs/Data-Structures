#include "stack.c"
#include <stdio.h>

int main (void)
{
    stack *r = newStack(10);
    int f, l;
    f = 4;
    l = 1;

    push(r , f);
    peek(r);

    push(r, l);
    peek(r);

    pop(r);
    peek(r);
}