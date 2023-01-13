#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,j;
    int num[10];
    int tmp;
    srand(time(NULL));

    for(i=0; i<10; i++){
        num[i] = rand()%50;
    }

    for(i=0; i<10; i++){
        printf("%d ",num[i]);
    }

    for(i=0; i<10;i++){
        for(int j=i+1;j<10;j++){
            if(num[i]>num[j]){
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    printf("\n 並び替え後\n");
     
    for(i=0; i<10; i++){
        printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}