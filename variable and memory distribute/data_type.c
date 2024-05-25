typedef unsigned int u32;
typedef struct _PERSON
{
    char name[64];
    int age;
}Persopn;
 

#include "stdio.h"

int main(){
    u32 i=10;
    Persopn persopn_1;
    struct _PERSON persopn_2;
    printf("%d\n",i);
    persopn_1.age=18;
    char name_1[64]="jone";
    strcpy(persopn_1.name,name_1);
    printf("%s\n",persopn_1.name);
}