#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i,num[3];
    double x,y=1/343*100,count=0;
    srand(time(NULL));

    printf("理論値 : %.4lf%%\n",1.0/343.0*100.0);

    int N;

    printf("試行回数 : ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        num[0] = rand()%7+1;
        num[1] = rand()%7+1;
        num[2] = rand()%7+1;
        if(num[0] == 7 && num[1] == 7 && num[2] == 7){
            count = count + 1;
        }
    }

    printf("実数値 : %.4lf%%",count/N*100);

    printf("\n");

    return 0;
}