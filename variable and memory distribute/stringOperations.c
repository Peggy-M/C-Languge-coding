//
// Created by peppa on 2024/5/25.
//

#include "stdio.h"

void fun_1(){
    char str_1[] = { 'h', 'e', 'l', 'l', 'o','\0'} ; // 这里必须添加一个反斜杠【\0】 作为结束的标识符
    printf("%s\n",str_1);
}

void fun_2(){
    char str_2[100] = { 'h', 'e', 'l', 'l', 'o' };
    printf("%s\n",str_2);
}

void fun_3(){
    char str_3[100] = "hello";
    printf("%s\n",str_3);
}

void fun_4(){
    char str_4[100] = "hello \0 world";
    printf("%s\n",str_4);
    int space_size = sizeof(str_4);
    printf("输出的 str_4 所占空间大小:%d\n", space_size);
}

void fun_5(){
    char str_5[100] = "hello \1 world";
    printf("%s\n",str_5);
    int space_size = sizeof(str_5);
    printf("输出的 str_4 所占空间大小:%d\n", space_size);
}

int main(){
    fun_1();
    fun_2();
    fun_3();
    fun_4();
    fun_5();
}