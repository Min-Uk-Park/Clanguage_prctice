#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
#define MAX 100

int main(){
    int a[3],b[3] = {0,},c,i,j;

    while(1){
        srand(time(NULL));
        do{
            b[0]=rand()%9+1;
            b[1]=rand()%9+1;
            b[2]=rand()%9+1;
        }while(b[0]==b[1]||b[0]==b[2]||b[1]==b[2]);
        while(1){
            printf("중복하지 않는 세자리 수를 입력하시오. <게임을 끝내려면 0을 입력>");
            scanf("%d",&c);
            if(c==0)break;
            if(c<100||c>=1000){
                printf(" 세자리 수를 입력해야 합니다.");
                continue;

            }
            a[0] = c/100;
            a[1]=(c-a[0]*100)/10;
            a[2]=c%10;
            if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2]){
                printf("같은 숫자를 사용하지 못합니다.\n");
                continue;
            }
            int strike=0,ball=0;

            for(i=0;i<3;i++){
                if(a[i]==b[i])strike++;
                for(j=0;j<3;j++){
                    if(i!=j && a[i]==b[j]) ball++;
                }

            }
            if(strike==3){
                printf("정답입니다.\n");
                break;
            }
            else{
                printf("strike : %3d, ball : %3d\n",strike,ball);
            }
        }
        if(c==0)break;
    }
}