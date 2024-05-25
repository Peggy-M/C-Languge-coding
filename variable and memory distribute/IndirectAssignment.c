//
// Created by peppa on 2024/5/25.
//
#include "stdio.h"

int fun_1(){
    return 10;
}

int fun_2(int a){
    a = 100;
}

int fun_3(int* a){
    *a = 100;
}

int fun_4(){
    int a = 0;
    a = fun_1();
    printf("%d\n",a);

    fun_3(&a);
    printf("%d\n",a);
}


int main(){
    fun_4();
}