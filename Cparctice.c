#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

void Star(int star[5][5]){
    int i=0,j;

    while(i<5){
        j=0;
        while(j<5){
            if(star[i][j]==1) putchar('*');
            else putchar(' ');
            j++;
        }
        i++;
        putchar('\n');
    }

    system("pause");
}


int main(){

    int star[5][5] = {{0,0,1,0,0},
                    {0,1,0,1,0},
                    {1,0,0,0,1},
                    {0,1,0,1,0},
                    {0,0,1,0,0}};


    Star(star);
}