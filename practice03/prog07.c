#include<stdio.h>

int main(){
    int a, b, i, y;

    printf("input = ");
    scanf("%d,%d", &a,&b);
    printf("y=%dx+%d",a,b);
    printf("( a , b )=( %d , %d )\n",a,b);

    for(i=1; i<=10; i=i+1){
        y=a*i+b;
        printf("( x , y )=( %d , %d )\n",i,y);
    }

    return 0;
}