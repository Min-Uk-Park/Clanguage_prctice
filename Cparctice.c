#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

// 합계 함수
int SUM(int score[],int n){
    int i=0,sum=0;

    while(i<n){
        sum+=score[i];
        i++;
    }
    
    return sum;
}

//평균 함수
int avg(int sum,int n){
    float avg = (float)sum / n;

    return avg;
}

// 최대값 함수
int max(int score[],int n){
    int i=0,max=score[0];

    for(i=1;i<n;i++){

        if(max!=score[i]){
            if(max<score[i]) {
                 max = score[i];
        }
    }
      
}
    return max;
}

        
// 최소값 함수
int min(int score[],int n){
    int i,min=score[0];

    for(i=1;i<n;i++){
        min = min > score[i] ? score[i] : min;
    }

    return min;

}

// main함수
int main(int argc, char *argv[]){

    int i=0,n,sum;

    printf("학생 수를 입력하세요. ");
    scanf("%d",&n);
    putchar('\n');

    int score[n];

    while(i<n){
        printf("학생[%d] : ",i+1);
        scanf("%d",&score[i]);
        i++;
    }

    sum = SUM(score,n);
    printf("\n합계 : %d",sum);
    printf("\n평균 : %d",avg(sum,n));
    printf("\n최대값 : %d",max(score,n));
    printf("\n최소값 : %d\n",min(score,n));

    system("pause");
}