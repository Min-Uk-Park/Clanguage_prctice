#include <stdio.h>
#include <stdlib.h>

struct student{
    char *name;
    int age;
    float grade;
}*member;


int main(){
    member = malloc(sizeof(struct student));

    (*member).name = "parkminuk";
    member->age = 23;
    member->grade = 70.7;

    printf("%s\n%d\n%.1f\n",(*member).name,member->age, member->grade);
    printf("%d\n",sizeof(struct student));

    (*(member+10)).name = "kimminsuk";
    (member+10)->age = 20;
    (member+10)->grade = 66.6;
    printf("%s\n%d\n%.1f\n",(*(member+10)).name,(member+10)->age, (member+10)->grade);

    system("pause");
}

