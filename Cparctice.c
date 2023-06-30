#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

int main(){
    int n,a[MAX][MAX] = {0,};

    printf("숫자 입력 : ");
    scanf("%d",&n);

    int i,j,r=0,x=-1,y=-1,k=1,s=1;
    int nn;

    nn=n;

    for(;;){
        s=1;
        for(j=0;j<n;j++){
            
            
            x=x+s;
            y=y+s;
            a[x][y] = k;
            k++;
            if(k==10) k=0;
            
        }
        if(n==0) break;
        n--;
        //printf("%d",n);
        
        s=-1;
        for(j=0;j<n;j++){
            
            
            y=y+s;
            a[x][y] = k;
            k++;
            if(k==10) k=0;
        
        }
        
        if(n==0) break;
        n--;

        for(j=0;j<n;j++){
            
            x=x+s;

            a[x][y] = k;
            
            k++;
            if(k==10) k=0;
            
        }
        
        //s=-s;
        if(n==0) break;
        n--;
    }

    printf("%d\n",n);

    for(i=0;i<nn;i++){
        for(j=0;j<=i;j++){
       
            printf("%2d",a[i][j]);
        
        
            
        }
        
        putchar('\n');
    }

    system("pause");

}