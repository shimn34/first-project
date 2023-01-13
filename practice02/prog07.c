#include<stdio.h>

int main(){
    int i;
    int x = 0;

    for (i=0;i<10;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}