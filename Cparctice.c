#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

int  main(){
    char *pa,a;
    char name[100] = "minuk";
    char major[100]={0,}; // 초기화 해준다 배열을 왜냐면 쓰레기값이 저장되기 때문이다.

    major[0] = 's';
    // name[100] = "minuk";
    // a='a';

    
    // pa=&a;

    // printf("%c\n",*pa);
    pa="point";

    printf("%s\n",pa);
    printf("%s\n",&name[0]); //printf("%s\n",name)과 같다.
    printf("%s\n",major);

    system("pause");


}