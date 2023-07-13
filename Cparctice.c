#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

// int main(){
//     int *p,b[10],n=0;

//     int i=0;
//     while(i<sizeof(b)/4){
//         b[i]=n++;
//         i++;
//     }

//     i=0;
//     while(i<10){
//         printf("%2d",b[i]);
//         i++;
//     }
    
//     putchar('\n');

//     p=&b[0];

//     i=0;
//     while(i<10){
//         printf("%d\n",p); // printf("%d\n",*p);
//         p++; //주소를 4가 아닌 1씩 증가하는 이유
//         i++;
//     }
    
//     //주소와 포인터의 관계 
//     // printf("%d\n",sizeof(b)/4);


//     system("pause");
// }


int sum(int *,int );
int main(){
    int *p,result,n;
    int x[]={1,2,3,4,5,6,7,8,9};

    p=&x[0];

    n=sizeof(x)/4;
    result = sum(&x[0],n);

    printf("%d\n",result);
    system("pause");
}

int sum(int *p,int n){
    int i=0,result=0;

    while(i<n){
        // result+=*p;
        // i++;
        // p++;
        result+=*(p+i);
        i++;
    }
    
    return result;
}