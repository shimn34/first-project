#include<stdio.h>

int main(){
    int i, num;

    printf("input = ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        if(num < i*i)break;
        printf("%d ",i*i);
    }
    printf("%d",i-1);
    printf("\n");

    return 0;
}