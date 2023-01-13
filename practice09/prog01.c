#include<stdio.h>
#include<string.h>

int main(){
    char x[100],y[100];

    printf("input01 = ");
    scanf("%s",x);
    printf("input02 = ");
    scanf("%s",y);

    //printf("%s %s\n",x,y);

    strcat(x,y);
    printf("%s\n",x);

    return 0;
}