#include<stdio.h>

int main(){
    int i, j, num;

    printf("input = ");
    scanf("%d",&num);

    for(i=2; i<=num; i++){
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
        printf("%d ",i);
    }

    printf("\n");

    return 0;
}