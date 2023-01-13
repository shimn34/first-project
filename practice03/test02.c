#include<stdio.h>

int main(){
    int x;

    printf("input = ");
    scanf("%d",x);

    for(int i=1; i<=x; i++){
        for(int a=1; a<=x-i; a++){
            printf(" ");
        }
    }

    return 0;
}