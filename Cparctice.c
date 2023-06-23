#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int Min(int ,int );

int main(){

    int a,b,min;
    
    
    
    while(1){

        scanf("%d%d",&a,&b);
        
        if(b==0) break;
        printf("The lesser of %d and %d is %d\n",a,b,Min(a,b));
        
    }

    system("pause");
} 
    
int Min(int x,int y){
    int min;

    min = x > y ? y:x;

    return min;
}