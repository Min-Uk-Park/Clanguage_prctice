#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// 값 전달(call by value) -> 인수(그 변수의 값)가 전달
// void exchange(int i,int j){
//     int temp;

//     temp = i;
//     i=j;
//     j=temp;

// }

// int main(){

//     int i=10,j=20;

//     printf("함수 호출 전 i,j값 : %d, %d\n",i,j);

//     exchange(i,j);

//     printf("함수 호출 후 i,j값 : %d, %d\n",i,j);

//     system("pause");
// }



// 주소 전달(call by reference) -> 그 변수의 주소를 전달
void exchange(int *i,int *j){
    int temp;

    temp = *i;
    *i=*j;
    *j=temp;

}

int main(){

    int i=10,j=20;

    printf("함수 호출 전 i,j값 : %d, %d\n",i,j);

    exchange(&i,&j);

    printf("함수 호출 후 i,j값 : %d, %d\n",i,j);

    system("pause");
}