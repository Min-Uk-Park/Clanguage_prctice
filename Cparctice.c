#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];  //-> 포인터는 왜 실행이 안되는가
    int age;
    float grade;
}member[2];


int main(){
    int i=0;

    while(i<2){
        printf("이름 나이 성적을 차례대로 입력하시오. : ");
        scanf("%s%d%f",member[i].name,&member[i].age,&member[i].grade);
        getchar();
        i++;
    }
    
    printf("%9s%9s%9s\n","이름","나이","성적");
    puts("================================\n");

    i=0;
    while(i<2){
        printf("%6s%6d%9.1f\n",member[i].name,member[i].age,member[i].grade);
        i++;
    }
    system("pause");
}


 