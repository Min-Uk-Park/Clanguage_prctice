#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

//명령프롬프트에서 디버깅 하는 방법으로 해야함 Cparctice.exe입력 후 Enter 하면 실행됨

int main(int argc,char *argv[]){
    int a,b;

    printf("%d\n",argc);

    for(a=0;a<=argc;a++){
        printf("argv[%d] = %s\n",a,argv[a]);
    }

    system("pause");
}