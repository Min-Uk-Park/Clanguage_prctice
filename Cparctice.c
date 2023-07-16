#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memset,memcpy 함수 사용 시 선언

// 메모리 복사
struct student{
    int age;
    char name[10];
    float grade;
};

int main(){
    struct student stu1 = {21,"parkminuk",77.7};
    struct student stu2;
    struct student *stu3;

    stu3 = malloc(sizeof(struct student)); // 할당을 왜 해줘야 하는지?
    memcpy(&(*stu3).grade,&stu1.grade,4);

    memcpy(&stu2,&stu1,sizeof(struct student));

    printf("%d  %s  %.1f\n",stu2.age,stu2.name,stu2.grade);
    printf("%.1f\n",(*stu3).grade);

    system("pause");
}
