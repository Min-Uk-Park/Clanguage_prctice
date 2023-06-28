#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

int main(){
    int a[5][5] = {0,};
    int i=0,j,k=1,repeat = 5;
    int x=0,y=-1,s=1;

    for(;repeat!=0;){
        i=0;
        while(i<repeat){
            y+=s;
            a[x][y] = k;
            k++;
            
            i++;
        }
        
        repeat--;
        i=0;
        
        while(i<repeat){
            x+=s;
            a[x][y] = k;
            k++;
            i++;
        }
        s=-s;
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