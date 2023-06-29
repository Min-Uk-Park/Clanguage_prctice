#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 125

// 선택정렬
void SelectionSort(int min[],int n){
    
    int temp,i,j,MIN,k=1;

  

    for(i=0;i<n;i++){
        MIN = min[i];
        for(j=k;j<n;j++){
            if(MIN>min[j]){
                temp = min[i];
                min[i] = min[j];
                min[j] = temp;
                MIN = min[i];
                
            }
            
        }
        k++;
    }
    for(i=0;i<n;i++){
        printf("%-2d",min[i]);
    }
    printf("\n");
    system("pause");    
}
int main(){
    int min[MAX];
    int i,n;

    for(i=0;;i++){
        scanf("%d",&min[i]);
        if(min[i]==0) break;
    }
    
    for(i=0;i<MAX;i++){
        if(min[i]==0) break;

    }

    n=i;


    for(i=0;i<n;i++){
        printf("%-2d",min[i]);

    }

    putchar('\n');

    SelectionSort(min,n);

    
    
}