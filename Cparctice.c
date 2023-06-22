#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("관계연산자 & 논리연산자 배우기\n형식지정자 기능 배우기\n제어문자 기능 배우기\n");
    printf("제어문자 : \n /b : backspace, /r : 그 줄의 첫 번째로 이동\n");
    

    int a=88,max,n,num,maxnum;
    printf("학생 수: ");
    scanf("%d",&num);
    int grade[num];
    printf("나의 점수 입력 :  ");
    scanf("%d",&grade[0]);
    
    for(n=1;n<num;n++){
        printf("학생%d의 점수 : ",n);
        scanf("%d",&grade[n]);
    }

    max = grade[0];
    maxnum = 0;

    for(n=1;n<num;n++){
        
        max = max> grade[n] ? max : grade[n];
        maxnum = max>grade[n] ? maxnum : n;

        
    }

    printf("최고 점수는 %d입니다.\n1등 학생은 학생%d입니다.\n ",max,maxnum);
    
    

    system("pause");
    return 0;
}