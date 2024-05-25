#include "stdio.h"

void test_1()
{
    int a = 10;
    printf("len:%d\n", sizeof(a));
    printf("len:%d\n", sizeof(int));
    printf("len:%d\n", sizeof a);
    return 0;
}

void test_2()
{
    unsigned int b = 10;
    printf("len:%d\n", sizeof(b));
    printf("len:%d\n", sizeof(unsigned int));
    printf("len:%d\n", sizeof b);
    return 0;
}

void test_3(int arr[])
{
    printf("array size: %d", sizeof(arr));
}

void test_4()
{
    int arr[] = {0, 1, 2, 3, 4};
    test_3(arr);
}

int main()
{
    test_1();
    printf("\n======================\n");
    test_4();
}

/*
PS E:\Workspace\code\c\C-Languge-coding\variable and memory distribute> size .\void_data.exe
   text             data                    bss          dec     hex filename
   9944             2228                    2432         14604    390c .\void_data.exe
[代码区]    [静态区/全局初始化数据区] [未初始化数据区] [十进制总和] 
*/