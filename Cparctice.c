#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memset함수 사용 시 선언

struct student{
    int age;
    char name[10];
    float grade;
};

// int main(){
//     struct student aaa = {0, };

//     printf("%d\n",aaa.age);
//     printf("%s\n",aaa.name);
//     printf("%.1f\n",aaa.grade);

//     system("pause");
// }

int main(){
    struct student *aaa;

    aaa = malloc(sizeof(struct student));

    memset(aaa,0,sizeof(struct student)); // 초기화는 0으로 해야함!!!

    printf("%d\n",(*aaa).age);
    printf("%s\n",(*aaa).name);
    printf("%.1f\n",(*aaa).grade);

    system("pause");
}