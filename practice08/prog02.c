#include<stdio.h>

int main(){
    int i;
    char x[100]="abc";

    for(i=0;x[i]!=0;i++){
        printf("%c",x[i]-32);
    }

    printf("\n");

    return 0;
}