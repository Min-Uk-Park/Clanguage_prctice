#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memset함수 사용 시 선언

struct student{
    int age;
    char name[10];
    float grade;
};

int main(){
    struct student stu1 = {21,"parkminuk",77.7};
    struct student stu2;
    struct student *stu3;

    stu2=stu1; // 구조체 변수끼리 대입이 가능하다.
    stu3=&stu1; // 구조체 포인터 변수에 구조체 변수의 주소 대입이 가능하다.

    printf("%d  %s  %.1f\n",stu2.age,stu2.name,stu2.grade);
    printf("%d  %s  %.1f\n",stu3->age,stu3->name,stu3->grade);

    system("pause");
}
