#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[10],i;
    srand(time(NULL));

    for(i=0;i<10;i++){
        num[i]=rand()%10+1;
        printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}