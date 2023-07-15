#include <stdio.h>
#include <stdlib.h>
#define N 3

// 석차구하기
void input(int *p){
    int i=0;
    while(i<N){
        scanf("%d",(p+i));
        i++;
    }

}

void rank(int *p,int *r){
    int i,j;

    for(i=0;i<N;i++){
        *(r+i)=1;
        for(j=1;j<N;j++){
            if(*(p+i)<*(p+j)){
                *(r+i)+=1;
            }
        }
    }
}
void print(int *p,int *r){
    int i=0;
    while(i<N){
        printf("%d => %d\n",*(p+i),*(r+i));
        i++;
    }
}

int main(){
    int *p,*r;

    p=(int *)malloc(N*sizeof(int));
    r=(int *)malloc(N*sizeof(int));

    input(p);
    rank(p,r);
    print(p,r);

    system("pause");
}