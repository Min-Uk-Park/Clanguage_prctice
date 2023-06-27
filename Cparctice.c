#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

// 배열에 숫자 채우기
int main(){
    int i=0,j,a[5][5],n=1,k,m=0;

    while(i<5){
        j=0;
        while(j<5){
            if(j==0 && i >=1){
                for(k=0;k<=m;k++){
                    a[i][j]=0;
                    j++;
                }
                
                m++;
            }
            a[i][j]=n;
            n++;
            j++;
        }
        

        i++;
    }

    i=0;
    while(i<5){
        j=0;
        while(j<5){
            if(a[i][j]!=0){
                printf("%3d",a[i][j]);
                j++;
            }
            else {
                printf("   ");
                j++;
            }
        }
        i++;
        putchar('\n');
    }
    system("pause");
}