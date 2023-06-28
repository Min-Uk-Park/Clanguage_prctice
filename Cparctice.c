#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

// int main(){
//     int a[5][5]={0,},k=1,i=0,j,r=0;

//     while(i<5){
//         if(i<=2){
//             j=r;
//             while(j<5-r){
//                 a[i][j]=k;
//                 k++;
//                 j++;
//             }
           
//         }
//         else{
//             j=4-r;
//             while(j<5-(4-r)){
//                 a[i][j]=k;
//                 k++;
//                 j++;
//             }
//         }
//         i++;
//         r++;
        
//     }

//     i=0;
//     while(i<5){
//         j=0;
//         while(j<5){
//             if(a[i][j]!=0){
//             printf("%3d",a[i][j]);
            
//             }
//             else{
//                 printf("   ");
//             }
//             j++;
//         }
//         putchar('\n');
        
//         i++;
//     }

//     system("pause");
// }


int main(){
    int a[5][5] = {0,};
    int i=0,j,k=1,n,r=1,kk=0;

    while(i<5){
        j=0;
        if(i>0&&i<4){
                for(n=1;n<=r;n++){
                    a[i][j]=0;
                    //r++;
                    j++;
                }
                if(i==2) r=1;
                else r++;
            }
        while(j<5){
            if(i>0&&i<4){
                if(i==3)kk=2;
                if(j>4-i+kk){
                    
                    for(n=1;n<=i-kk;n++){
                        a[i][j] = 0;
                        j++;
                    }
                    
                }
                else{
                    
                    a[i][j] = k;
                    k++;
                    j++;
            }
            }
            else{
                a[i][j] = k;
                k++;
                j++;         
           
            }
        }
        i++;
    }
    i=0;
    while(i<5){
        j=0;
        while(j<5){
            if(a[i][j]!=0){
            printf("%4d",a[i][j]);
            
            }
            else{
                printf("    ");
            }
            j++;
        }
        putchar('\n');
        
        i++;
    }

    system("pause");


}
