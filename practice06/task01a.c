#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[100];
    int i,j,x;
    srand(time(NULL));

    for(i=0;i<10;i++){
        num[i]=rand()%10;
        printf("%d ",num[i]);
    }

    printf("\n");

    for(i=0;i<10;i++){
        for(j=i;j<10;j++){
            if(num[i] > num[j]){
                x = num[i];
                num[i] = num[j];
                num[j] = x;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}