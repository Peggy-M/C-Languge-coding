#include "stdio.h"

void test01(void)
{
    printf("打印空");
}
// void 可以指向任意的类型数据，万能指针
void test02()
{
    int a = 10;
    void *p = NULL;
    p=&a;
    printf("a:%d\n",*(int*)p);

    char c = 'c';
    p=&c;
    printf("c:%c\n",*(char*)p);
}

int main()
{
    test02();
}