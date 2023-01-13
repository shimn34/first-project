#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num[100],x[100],y[100],xc=0,yc=0;
    int i;
    srand(time(NULL));

    for(i=0;i<100;i++){
        num[i]=rand()%100+1;
        
        if(num[i]%2 == 0){
            x[xc]=num[i];
            xc=xc+1;
        }else{
            y[yc]=num[i];
            yc=yc+1;
        }
    }

    printf("偶数 = ");
    for(i=0;i<xc;i++){
        printf("%d ",x[i]);
    }

    printf("\n");
    printf("奇数 = ");

    for(i=0;i<yc;i++){
        printf("%d ",y[i]);
    }

    printf("\n");

    return 0;
}