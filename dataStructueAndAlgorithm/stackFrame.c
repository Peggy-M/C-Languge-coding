//
// Created by peppa on 2024/5/25.
//
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "stdio.h"

#define MAX_SIZE 100 //定义当前栈的最大容量
typedef struct {
    void** data; //存储元素的指针数组
    ptrdiff_t top; //栈顶指针
    size_t maxSize; //栈的最大容量
    size_t elemSize; //每个元素的大小
    void (*freeFunc)(void*);//用于释放元素的函数指针 [指向一个接受参数为 void* 返回值为 void 的函数]
}GenericStack;


//初始化栈
void initStack(GenericStack* s,size_t elemSize,size_t maxSize,void (*freeFunc)(void*)){
    s->data = (void**)malloc(maxSize * sizeof (void*));
    if(!s->data){
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    s->top = -1;
    s->elemSize = elemSize;
    s->maxSize = maxSize;
    s->freeFunc = freeFunc;
}

// 判断 栈 是否为 NULL
bool isEmpty(GenericStack* stack){
    return stack->top == -1;
}

//压栈
bool push(GenericStack* stack,void* value){

    if(stack->top + 1 >= stack->maxSize){ // 栈满
        return false;
    }
    stack->data[++stack->top] = malloc(stack->elemSize);
    if(!stack->data[stack->top]){
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    memcpy(stack->data[stack->top],value,stack->elemSize);
    return true;
}

//弹栈
bool pop(GenericStack* stack,void* value){
    if(isEmpty(stack)){
        return false;
    }
    if(stack->freeFunc){
        stack->freeFunc(stack->data[stack->top]); //如果提供了释放函数则调用释放空间
    }
    memcpy(value,stack->data[stack->top],stack->elemSize);
    free(stack->data[stack->top]);
    stack->top--;
    return true;
}

//查看栈顶元素
bool peek(GenericStack* stack,void* value){
    if(stack->top == -1){ //栈空, 无法查看栈顶元素
        return false;
    }
    memcpy(value,stack->data[stack->top], stack->elemSize);
    return true;
}


//清理栈
bool cleanStack(GenericStack* stack){
    for(size_t i = 0; i <= stack->top; i++) {
        if (stack->freeFunc) {
            stack->freeFunc(stack->data[stack->top]);
        }
        free(stack->data[i]);
    }
    free(stack->data);
    stack->data = NULL;
    stack->top = -1;
    stack->elemSize = 0;
    stack->maxSize = 0;
    stack->freeFunc = NULL;
}

int main(){
    GenericStack intStack;
    initStack(&intStack,sizeof(int),MAX_SIZE,free);

    int value_1 = 50 ;
    push(&intStack,&value_1);

    int topValue_1;
    peek(&intStack,&topValue_1);
    printf("栈顶的元素是:%d\n",*(int*)&topValue_1);

    int value_2 = 100 ;
    push(&intStack,&value_2);

    int topValue_2;
    peek(&intStack,&topValue_2);
    printf("栈顶的元素是:%d\n",*(int*)&topValue_2);

    int val;
    pop(&intStack,&val);
    printf("弹出的元素是:%d\n",*(int*)&val);

}