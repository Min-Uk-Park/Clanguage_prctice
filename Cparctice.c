#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

float avg(int score[]){
    int i=0,sum=0;
    float avg;

    while(i<5){
        sum+=score[i];
        i++;
    }

    avg = (float)sum/5;
    return avg;
}

int main(){
    int score[5],i=0;
    float Avg;

    printf("score[0]에서부터 score[4]에 입력될 5개의 정수 입력\n");

    while(i<5){
        scanf("%d",&score[i]);
        i++;
        
    }
    
    Avg = avg(score);

    printf("배열의 평균 : %.1f\n",Avg);
    system("pause");
    
}


  