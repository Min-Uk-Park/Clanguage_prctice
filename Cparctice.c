#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

int near(int num[]){

    int i=0,min,sub,minsub=100;

    while(i<4){
        if(num[i]!=5){
            sub = num[i]>5 ? (num[i]-5) : (5-num[i]);
        }
        else{
            sub = 0;
        }

        if(sub<minsub){
            minsub=sub;
            min=num[i];
        }
       i++;
    }

    return min;
}

int main(){
    int i,num[5],result;

    for(i=0;i<=4;i++){
            scanf("%d",&num[i]);
            
        }
        
    result = near(num);

    printf("가장 가까운 값은 : %d\n",result);

    system("pause");

    }


