#include<stdio.h>

int main(){
    int input, i, x=1;

     printf("input = ");
     scanf("%d",&input);
    
    for(i=1; i<=input; i++){
        x=x*2;
    }
    printf("%d\n",x);
    
    return 0;
}