#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,j;
    int x,y[100],num=0;
    srand(time(NULL));

    scanf("%d",&x);

    for(i=0;i<x;i++){
        y[i] = rand()%100+1;
    }

    for(i=0;i<x;i++){
        printf("%d ",y[i]);
    }

    printf("\n");

    for(i=0;i<x;i++){
       num = y[i] + num;
    }

    printf("%d\n",num%100);

    return 0;
}