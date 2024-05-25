//
// Created by peppa on 2024/5/23.
//
#include "stdio.h"

void test(){
    int b = 0;
    printf("%d\n",b);
    int *q = &b;
    *q = 10;
    printf("%d\n",b);
    int **t = &q;
    **t = 100;
    printf("%d\n",b);
    int ***m = &t;
    ***m = 1000;
    printf("%d\n",b);
}

int main(){
    test();
}