#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

// int fact(int );

// int main(){
//     int n,i,result;

//     printf("정수를 입력하세요. ");
//     scanf("%d",&n);

//     i=0;

//     while(i<=n){
//         result = fact(i);
//         printf("%2d! = %10d\n",i,result);
//         i++;
//     }

//     system("pause");   
// }

// int fact(int n){
    
//     int result=1;

//     if(n>1){
//         result = n * fact(n-1);
//     }

//     return result; 
// }

int fact(int n){
    
    if(n>=0){
        if(n<=1){
            return 1;
        }
        else{
            return (n * fact(n-1));
        }    
    }
  
}


int main(){
   
    int n,i,result;

    printf("정수를 입력하세요. ");
    scanf("%d",&n);

    i=0;

    while(i<=n){
        result = fact(i);
        printf("%2d! = %10d\n",i,result);
        i++;
    }

    system("pause");
}
