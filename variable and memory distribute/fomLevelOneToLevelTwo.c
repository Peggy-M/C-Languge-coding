//
// Created by peppa on 2024/5/25.
//
#include <malloc.h>
#include <string.h>
#include "stdio.h"

void allocateSpace(char** p){
    *p = (char *) malloc(100);
    strcpy(*p,"Hello World \n");
}

void freeSpace(char** p){
    if(p==NULL){
        return;
    }
    if(*p!=NULL){
        free(*p);
        *p=NULL;
    }
}

int main(){
    char* p = NULL;
    allocateSpace(&p);
    printf("%s",p);
    freeSpace(&p);
    if(p==NULL){
        printf("释放内存空间");
    }
}
