#include<stdio.h>

int len(char str1[100]){
    int i,x=0;

    for(i=0; str1[i]!=0; i++){
        x = x + 1;
    }

    return x;
}

int main(){
    char x[100];

    scanf("%s",x);

    printf("%d\n",len(x));

    return 0;
}