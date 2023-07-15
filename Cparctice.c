#include <stdio.h>
#include <stdlib.h>

struct student{
    char *name;
    int age;
    float grade;
}group;



int main(){
    struct student list;
    list.name = "박민욱";
    list.age = 23;
    list.grade = 70.3;

    struct student member = {"홍길동",21,77.7};

    printf("%s, %d, %.1f\n",list.name,list.age,list.grade);
    printf("%s, %d, %.1f\n",member.name,member.age,member.grade);

    group.name = "김동현";
    group.age= 15;
    group.grade = 66.8;  
    printf("%s, %d, %.1f\n",group.name,group.age,group.grade);
    system("pause");
}

