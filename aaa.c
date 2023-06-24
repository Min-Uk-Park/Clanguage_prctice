#include <stdio.h>

extern int a;

int repeat(void){

    a=10;
    a++;
    printf("%d\n",a);


}