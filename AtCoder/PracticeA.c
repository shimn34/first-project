#include<stdio.h>

int main(){
    int a,b,c;
    char s[100];
    scanf("%d",&a);
    scanf("%d %d",&b,&c);
    scanf("%s",s);

    printf("%d ",a+b+c);
    printf("%s\n",s);

    return 0;
}