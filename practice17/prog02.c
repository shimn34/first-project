#include<stdio.h>

void nizyo(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d ",i*i);
    }
}

int main(){
    nizyo();

    printf("\n");
    
    return 0;
}