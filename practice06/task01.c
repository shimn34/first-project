#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[100],x;
    int i,j;
    srand(time(NULL));

    for(i=0;i<10;i++){
         num[i]=rand()%10;

        for(j=0;j<i;j++){
            if(num[i] < num[i-j]){
                x = num[i-j];
                num[i-j] = num[i];
                num[i] = x;
            }else{
                break;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }

    printf("\n");

    return 0;
}