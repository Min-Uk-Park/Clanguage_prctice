#include <stdio.h>
#include <stdlib.h>

struct player{
    char name[30];
    int u_number;
};

struct team{
    int t_number;
    struct player pitcher;
    struct player catcher;
};

int main(){

    struct team tiger = {16,{"yang",27},{"kimmin",15}};
    struct team lion = {20,{"simchangmin",10},{"kangminho",12}};
    struct team twins = {21,{"chawuchan",27},{"kangnam",17}};

  

    printf("기아타이거즈 투수 이름 : %s\n",tiger.pitcher.name);
    printf("삼성라이온즈 포수 이름 : %s\n",lion.catcher.name);
    printf("LG twins 투수 등번호 : %d\n",twins.pitcher.u_number);


    system("pause");
}