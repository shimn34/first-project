#include<stdio.h>

int main(){
    int i,j;
    int x,num,tmp=0;

    printf("ε₯ε\n");
    scanf("%d %d",&x,&num);

    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            if(i+j <= num){
                tmp = tmp+1;
            }
        }
    }

    printf("εΊε\n%d\n",tmp);
    
    return 0;
}