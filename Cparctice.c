#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100



// int main(){
//     int a,b,*c,*d,*f;

//     a=10;
//     b=20;


//     c=&a;
//     d=&b;

//     printf("%d %d %d %d\n",a,b,&a,&b);  // 10 20 xxxx xxxx
//     printf("%d %d\n",*c,*d); // 10 20
    
//     *(d++)=30;
    
//     printf("%d\n",a);

    
 

//     system("pause");

// }

int main(){
    int x,*xp;
    char y,*yp;

    x=10;
    y='D';

    xp=&x;
    yp=&y;

    printf("%d %c\n",*xp,*yp);


    ++*(yp++);
    *(--yp)=y+3;

    printf("%c\n",y);
    system("pause");

}