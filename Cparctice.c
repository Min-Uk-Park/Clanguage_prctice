#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
//#include <conio.h>

// void reverse(char major[]){
//     int i=0;

    
//     while(i<strlen(major)-1){
//         putchar(major[i]);
//         i++;
//     }

//     putchar('\n');
//     system("pause");
// }
   
// int main(){

//     char major[30];

//     printf("학과를 입력하세요. ");
//     scanf("%s",major);

//     reverse(major);
// }


int main(){

    char name[12]="abcdef\n",r_name[12]="";
    int i=0, n, temp;
   //n=strlen(name);

    printf("%s\n",name);
    for(i=0;i<=11;i++){
        if(name[i]=='\n'){
            break;
        }
    }

    n=i;
   
    printf("%d\n",n);


    i=0;
    while(i<=n-1){
        
        r_name[i] = name[n-1-i];
        i++;
    }
    r_name[i]='\n';

    i=0;

    while(i<=n-1){
        if(r_name[i]<0){
            temp = r_name[i];
            r_name[i]=r_name[i+2];
            r_name[i+2]=temp;
        }

        i+=3;
    }

    printf("%s\n",r_name);
    //puts(r_name);
    //putchar('\n');
    

    system("pause");

   }
