#include "stdio.h"

char *func()
{
    char p[] = "Hello World !";
    printf("%s\n", p);
    return p;
}

int main()
{
    char *p = NULL;
    p = func();
    printf("%s\n", p);
}