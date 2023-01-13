#include<stdio.h>

int main(){
    int num;
    printf("input = ");
    scanf("%d",&num);

    if (num%100 == 0 && num%400 > 0){
        printf("平年\n");
    } else if (num%4 == 0){
        printf("うるう年\n");
    } else {
        printf("平年\n");
    }

    return 0;
}