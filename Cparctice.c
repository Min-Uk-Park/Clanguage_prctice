#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

int main(){

    int *p,a,b;
    char *name1,name2[50];

    strcpy(name2,"홍길동"); //strcpy(char *,) -> char *의 의미는???
    name1 = "박민욱"; // name = &name[0]

    p=&a;

    a=200;

    // printf("%d %d %d\n",p,*p,a);
    // printf("%s\n",name1); // %s의 경우 해당 주소부터 출력하는 것을 의미한다. printf("%s",name) = printf("%s",&name[0])이다.
    // printf("%s",name2);

    printf("%d\n",&name1[0]);
    b=4214884;
    printf("%c\n",b);
    printf("%c%c%c\n",&name1[0],&name1[1],&name1[2]);

    system("pause");
}
