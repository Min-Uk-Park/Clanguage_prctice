#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

int main(){

    char name[3][10] = {"박민욱","홍길동","김동현"};

    int i=0;

    while(i<3){
    
        // name[i] 은 &name[i][0] 과 같다!!
        printf("%s\n",name[i]);
        i++;
    }

    system("pause");
}
