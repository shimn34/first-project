#include<stdio.h>

int main(){
    int i;
    int x=0, y;

    printf("input = ");
    scanf("%d", &y);
    printf("%d\n",y);

    for(i=1; i<=y; i++){
        x=x+i;
    }
    printf("%d\n",x);
    return 0;
}