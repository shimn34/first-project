#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,j,tmp;
    int num[100];
    srand(time(NULL));

    for(i=0; i<50; i++){
        num[i] = rand()%50;
    }

    for(i=0; i<50; i++){
        printf("%d ",num[i]);
    }

    for(i=0; i<50; i++){
        for(j=i+1; j<50; j++){
            if(num[i] > num[j]){
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    printf("\n並び替え後\n");

    for(i=0; i<50; i++){
        printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}