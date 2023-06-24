#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int power_series(int ,int );

int main(){

    int a,n,result;

    printf("밑과 지수를 입력하세요. ");
    scanf("%d%d",&a,&n);

    result = power_series(a,n);

    printf("\n%d ^ %d = %d\n",a,n,result);

    system("pause");
}

int power_series(int a,int n){


    // if(n>1){
    //     a=a*power_series(a,n-1);
    // }

    // return a;
    int result=1;

    if(n>=1){
        result = a * power_series(a,n-1);
    }

    return result;
}