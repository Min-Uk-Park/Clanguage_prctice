#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    // int i=1,j,k;

    // while(i<=15){
    //     j=1,k=1;
    //     while(j<=31-2*i){
    //             printf("*");
    //             j++;
    //     }
    //     putchar('\n');
    //     while(k<=i){
    //         putchar(' ');
    //         k++;
    //     }
    //     i++;
    // }

    int i,j,k;

    for(i=1;i<=15;i++){
        for(j=0;j<=31-2*i;j++){
            printf("*");

        }
        printf("\n");
        for(k=1;k<=i;k++){
            printf(" ");
        }
    }

     system("pause");
     return 0;
}