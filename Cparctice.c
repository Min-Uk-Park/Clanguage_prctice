#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>
// 배열의 크기 MAX(125)로 지정
#define MAX 125

// 글자 역순 출력 함수 생성
void reverse(char name[],int n){
    // 역순으로 출력할 문자 배열 생성 후 임의의 값 지정, 만약 지정해주지 않으면 쓰레기값 생성됨
    char r_name[MAX] = "\n";
    int i=0,temp;

    // main함수에서 가져온 name[]을 r_name[]에 역으로 저장해준다.
    while(i<=n-1){
        
        r_name[i] = name[n-1-i];
        i++;
    }
    r_name[i]='\n';

    i=0;

    // 배열 중 한글인 부분은 3byte씩(utf-8에서) 차지함으로 순서를 바꿔줘야한다.
    // 이 때 배열에서 한글인지 아닌지(영어,띄어쓰기,기호 등등)를 구분해준다.
    while(i<=n-1){
        if((r_name[i] & 0x80) == 128){ // 예를 들면 r_name[0] 곱하기 10000000 = 128이라는 것은 r_name의 최상위 비트(MSB)가 1이므로 한글이라는 의미이다.
            temp = r_name[i];
            r_name[i]=r_name[i+2];
            r_name[i+2]=temp;
            i+=3;
        }
        else{
            i++;
        }
        
    }

    printf("%s\n",r_name);

    system("pause");
}


//거꾸로 출력하기
int main(){

    char name[MAX]="e동해물과 백두산이 마르고 닳도록\n";
    int i=0, n, temp;
   //n=strlen(name);

    printf("%s",name);

    // 널문자(\n) 저장된 배열 번호 알아내기
    for(i=0;i<=MAX-1;i++){
        if(name[i]=='\n'){
            break;
        }
    }
    // 해당 배열 번호 저장
    n=i;
   
    printf("%d\n",n);

    // 역순 출력하는 함수 호출
    reverse(name,n);

    

   }

