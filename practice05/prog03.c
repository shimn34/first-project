#include<stdio.h>

int main(){
    int i, j, num;
    int x[100];
    x[0] = 1;
    x[1] = 1;

    printf("input = ");
    scanf("%d",&num);
    for(i=0; i<num-1; i++){
        printf("%d ",x[i]);
        x[i+2] = x[i+1] + x[i];
    }
    printf("\n");
    return 0;
}