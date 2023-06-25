#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

int main(){
    char major[20],name[10] = "박민욱";

    // name은 &name[0]과 같다.
    printf("%s\n",name);
    printf("%s\n",&name[2]);
    printf("%s\n",&name[4]);

    // 문자 배열 지정
    strcpy(major,"정보통신공학부");
    printf("%s\n",&major[0]);

    system("pause");
}