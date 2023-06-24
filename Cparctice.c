#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

int main(int argc,char *argv[]){
    int a,b;

    printf("%d\n",argc);

    for(a=0;a<=argc;a++){
        printf("argv[%d] = %s\n",a,argv[a]);
    }

    system("pause");
}