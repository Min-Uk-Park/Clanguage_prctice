#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

int main(){
    int i=0,j,a[5][5],n=1;

    while(i<5){
        j=0;
        while(j<5){
            a[j][i]=n;
            n++;
            j++;
        }
        
        i++;
    }

    i=0;
    while(i<5){
        j=0;
        while(j<5){
            printf("%3d",a[i][j]);
            j++;
        }
        putchar('\n');
        i++;
    }
    
    system("pause");
}