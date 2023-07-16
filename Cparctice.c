#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> // offsetof함수 사용 시 선언 

// offsetof는 상대주소이다. 변위차로 첫 번째 주소로부터 얼마나 떨어져있는지를 나타냄
struct score{
    char name[20]; // 20
    float math,kor,eng; //12
};

struct group{
    
    struct score member[3];

};

int main(){

    struct group group1;

    int a,b,c,d,e,f,g,h,i;

    a = sizeof(group1.member[0]); //32
    b = sizeof(group1.member[1]); //32
    c = sizeof(group1.member[2]); //32

    d = sizeof(group1); // 96

    e = offsetof(struct score,name);
    f = offsetof(struct score,math);
    g = offsetof(struct score,eng);

    h = offsetof(struct group,member[0]);
    i = offsetof(struct group,member[1]);

    printf("%3d%3d%3d%3d\n",a,b,c,d);
    printf("%3d%3d%3d\n",e,f,g);
    printf("%3d%3d\n",h,i);

    system("pause");
}