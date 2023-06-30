#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

// 삽입정렬
// int main(){
//     int a[MAX]={0,};

//     int i,j,n,k,max,temp=0;

//     for(i=0;i<MAX;i++){
//        scanf("%d",&a[i]);
//        if(a[i]==0)break;
//     }

//     n=i;
    

//     k=1;
//     for(i=1;i<n;i++){
//         for(i=0;i<k;i++){
//             if(a[i]>a[k]){
//                 temp = a[i];
//                 a[i]=a[k];
//                 a[k]=temp;
//             }
//         }
//         k++;
//     }
    
    
//     for(i=0;i<n;i++){
        
//         printf("%3d",a[i]);
//     }
    
//     putchar('\n');

//     system("pause");
// }

// 삽입정렬
void insert_sort(int a[],int n){
    int i,j,temp,k;

    for(i=1;i<n;i++){
        k=i-1;
        j=k;
        while(1){
            if(a[j]>a[i]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                i--;
            }
            
            if(j==0) break;
            else j--;
        }
    }
}

int main(){
    int a[MAX]={0,};

    int i,j,n,k,max,temp=0;

    for(i=0;i<MAX;i++){
       scanf("%d",&a[i]);
       if(a[i]==0)break;
    }

    n=i;

    insert_sort(a,n);

    for(i=0;i<n;i++){
    
    printf("%3d",a[i]);

    }
    
    putchar('\n');

    system("pause");

}