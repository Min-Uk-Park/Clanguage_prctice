#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

int main(){
    int a;
    char b,c[10];

    scanf("%d",&a); 
    // getchar(); // getchar() 써서 Enter에 해당하는 \n값을 저장해준다. 문자입력을 받을 경우 \n같은 형식지정자를 받아오기 때문\
    에  문자 입력받기 전에 서줘야 한다.
    // scanf("%c",&b);
    
    scanf("%s",c);

    printf("%d\n",a);
    // printf("%c\n",b);
    printf("%s\n",c);

    system("pause");
}