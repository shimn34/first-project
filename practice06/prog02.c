#include<stdio.h>

int main(){
    int num[10],i;

    for(i=0;i<10;i++){
        num[i]=i+1;
        printf("%d\n",2*num[i]);
    }

    return 0;
}