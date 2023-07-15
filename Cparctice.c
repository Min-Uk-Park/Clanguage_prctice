#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// int main(){
//     int a=50;
//     char name[MAX] = "parkminuk";
//     // char name[a] = "parkminuk"; //배열의 크기 변수로 입력받아 사용 못함

//     printf("%s\n",name);
//     system("pause");
// }

// ??????????**
// int main(){
//     int k[5]={1,2,3,4,5},*kp;

//     kp = k;

//     // kp+=2;

//     printf("%d\n",kp);

//     kp++; //  이 말의 의미는 &k[0] -> &k[1]의 의미? 왜 그런지 이해 안됨 주소값의 차이는 4byte씩 나는 거 아닌가

//     printf("%d\n",kp);

//     system("pause");
// }

int main(){
    int n,sum;
    int *p;

    printf("입력할 수의 갯수를 입력하시오. :");
    scanf("%d",&n);

    p = (int*)malloc(sizeof(int)*n); // p는 크기가 4byte인 n개의 배열 중 1번째 배열의 주소를 의미함

    int i=0;
    while(i<n){
        scanf("%d",(p+i)); // ?????????**
        // p++;
        i++;
    }

    
    for(i=0;i<n;i++){
        printf("p[%d] => %d\n",i,*(p+i));
        
    }

    system("pause");

}