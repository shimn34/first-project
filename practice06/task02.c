#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[10000],x=0;
    int i=0;
    srand(time(NULL));

    while(1){
        num[i]=rand()%10;  
        x += num[i];

        /*for(j=0;j<i;j++){
            x = x + num[i];
        }*/

        if(x >= 1000){
            break;
        }
        i++;
    }

    printf("合計:%d  かいすう:%d\n",x,i);

    return 0;
}