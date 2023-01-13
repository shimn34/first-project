#include<stdio.h>

int main(){
    int i, x, y;

    for(i=0; i<=99; i++){
        y=2*i*i+1;
        printf("( x , y )=( %d , %d )\n",i,y);
    }

    return 0;
}