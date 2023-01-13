#include<stdio.h>

int main(){
    char str[100];

    scanf("%s",str);

    int i,num[100],ans=0;

    for(i=0; str[i]!=0; i++){
        num[i] = str[i]-48;
    }

    for(i=0; str[i]!=0; i++){
        ans = ans * 10 + num[i];
    }

    printf("%d",ans+2);

    printf("\n");

    return 0;
}