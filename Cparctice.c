#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int divide(int a,int b){return a/b;}
int mul(int a,int b){return a*b;}

int main(){
    int (* operation)(int ,int ); //함수 포인터 생성
    int a,b;

    char  op;
    printf("a와 b의 값을 입력하세요. ");
    scanf("%d%d",&a,&b);
    printf("연산자를 입력하세요. ");
    getchar();
    op = getchar();
    
// if문 사용한 경우    
    // while(1){
    // if(op=='+'){operation=add;break;}
    // else if(op == '-'){operation=sub;break;}
    // else if(op == '/'){operation=divide;break;}
    // else if(op == '*'){operation=mul;break;}
    // else {printf("error 다시 입력하세요. ");getchar();op = getchar();}
    // }

// switch~case 사용한 경우
    int k=1;
    while(k){
        switch(op){
            case '+' : operation = add; k=0; break; 
            case '-' : operation = sub; k=0; break;
            case '/' : operation = divide; k=0; break;
            case '*' : operation = mul; k=0; break;
            default : {printf("error, 다시 입력하세요. "); getchar();  op = getchar();}
        }
        
    }


    printf("%d %c %d = %d\n",a,op,b,operation(a,b));

    system("pause");
}