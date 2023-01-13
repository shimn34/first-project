#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i=0, j=0, count=0, flag=1;
    int dice1, dice2, dice3;
    srand(time(NULL));
    
    while(i<100000){
        dice1 = rand()%6+1;
        dice2 = rand()%6+1;
        dice3 = rand()%6+1;
        if(dice1*dice2*dice3%2 == 0){
            count++;
        }
        i++;
    }

    printf("%d\n",count*100/i);

    return 0;
}