//
// Created by peppa on 2024/5/25.
//
#include <string.h>
#include <malloc.h>
#include "stdio.h"

void fun_1(char *p){
    strcpy(p,"Hello-World-One");
}

void fun_2(char **p , int* len){
    char* tmp = (char*) malloc(100);
    if(tmp == NULL){
        return;
    }
    strcpy(tmp,"Hello-World-Two");
    *p = tmp;
    *len = strlen(tmp);
}

void test_1(){
    char buf[10] = {0}; //主动调用函数分配内存空间
    fun_1(buf);
    printf("内容:%s\n",buf);
}

void test_2(){
    int len;
    char *p;
    fun_2(&p,&len);
    printf("分配的空间内容:%s\n分配的空间的长度为:%d\n",p,len);
}

int main(){
//    test_1();
    test_2();
}