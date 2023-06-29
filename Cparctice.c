#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

// int main(){
//     int a[5][5]={0,};
//     int i,j,r=1,n=2,nn,nnn=0,k=1;

//     i=0;
//     while(i<5){
//         j=0;
//         if(i<2){
//         while(j<r){
            
//             a[i][n] = k;
//             k+=2; 
//             j++;
//             n++;
//         }
//         n-=2;
//         r+=2;
//         i++;
//         }
//         else{
//             nn = nnn;
//             while(j<r){
                
//                 a[i][nn] = k;
//                 nn++;
//                 j++;
//                 k+=2;
//             }
//         r-=2;
//         nnn++;
//         i++;
//         }
       
//     }
//     i=0;
//     while(i<5){
//         j=0;
//         while(j<5){
//             if(a[i][j]!=0){
//             printf("%3d",a[i][j]);
            
//             }
//             else printf("   ");
//             j++;
//         }
//         putchar('\n');
//         i++;
//     }

//     system("pause");
// }

int main(){
    int a[5][5] = {0,};
    int i=0,j,k,s=2,e=2;

    k=1;
    while(k<=25){
        for(j=s;j<=e;j++){
            a[i][j] = k;
            k+=2;
        }
        
        i++;
        if(i<=2){
            s--;
            e++;
        }
        else{
            s++;
            e--;
        }
    }

    i=0;
    while(i<5){
        j=0;
        while(j<5){
            if(a[i][j]!=0){
            printf("%3d",a[i][j]);
            
            }
            else printf("   ");
            j++;
        }
        putchar('\n');
        i++;
    }

    system("pause");
}