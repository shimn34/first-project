#include<stdio.h>

int main(){
    int a, b, c, D;

    printf("(a,b,c) = ");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("%dx^2 + %dx + %d = 0 となる解の個数は ",a,b,c);

    D=b*b-4*a*c;

    if (D == 0){
        printf("1\n");
    } else if (D > 0){
        printf("2\n");
    } else if (D < 0){
        printf("0\n");
    }

    return 0;
}