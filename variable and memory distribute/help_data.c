#include <stdio.h>
#include<stdlib.h>
#include<string.h>

char* func(){
    char* str = malloc(100);
    strcpy(str,"Hello World");
    printf("%s\n",str);
    return str;
}

void func_2(char **p) {
    *p = (char *)malloc(100); // 分配内存并赋值给指针的指针
    if (*p != NULL) {
        strcpy(*p, "hello world!");
        printf("%s\n", *p);
    } else {
        printf("Memory allocation failed\n");
    }
}

int main() {
    char *p = NULL;
    func_2(&p); // 传递指针的地址
    if (p != NULL) {
        printf("%s\n", p); // 在main中正确打印字符串
        free(p); // 释放分配的内存
    } else {
        printf("p is still NULL\n");
    }
    return 0;
}