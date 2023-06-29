#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

// 버블정렬
int main(){
    int a[MAX]={0,};

    int i,j,n,nn,max,temp=0;

    for(i=0;i<MAX;i++){
       scanf("%d",&a[i]);
       if(a[i]==0)break;
    }

    n=i;
    nn=i;

    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
    
    putchar('\n');

    

    for(i=0;i<nn-1;i++){
        max =a[0]; 
        for(j=1;j<n;j++){
            
            if(max>a[j]){
                temp = a[j];
                a[j] = max;
                a[j-1] = temp;
                max = a[j];
            }
            else {max = a[j];
                a[j] = max;}
            
        }
        n--;
    }

    
    for(i=0;i<nn;i++){
        
        printf("%3d",a[i]);
    }
    
    putchar('\n');

    system("pause");
}