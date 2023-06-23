#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// char Grade(int );

// int main(){

//     int score,grade;

//     printf("성적을 입력하시오. : ");
//     scanf("%d",&score);

//     grade = Grade(score);

//     printf("등급 : %c\n",grade);
    
//     system("pause");

// }

// char Grade(int S){

//     char G;
//     switch(S/10){
//         case 10 : G='A'; break;
//         case 9 : G='A'; break;
//         case 8 : G='B'; break;
//         case 7 : G='C'; break;
//         case 6 : G='D'; break;
//         default : G='F'; break;

//     }

//     return G;
// }

int caculate(int ,int ,char );

int main(){

    int a,b;
    char x;

    printf("2개의 정수 입력 : ");
    scanf("%2d%2d",&a,&b);

    printf("연산자 입력 [더하기(+), 빼기(-), 곱하기(*), 나누기(/)] : ");
    scanf("%c%c",&x,&x);

    printf("%3d%3c%3d = %d\n",a,x,b,caculate(a,b,x));

    system("pause");

}

int caculate(int a,int b,char x){
    int result;

    switch(x){

        case '*' : result = a * b; break;
        case '+' : result = a + b; break;
        case '/' : result = a / b; break;
        case '-' : result = a - b; break;

    }

    return result;
}