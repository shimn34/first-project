#include<stdio.h>

int main(){
    int i,j;
    int x,num,tmp=0;

    printf("入力\n");
    scanf("%d %d",&x,&num);

    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            if(i+j <= num){
                tmp = tmp+1;
            }
        }
    }

    printf("出力\n%d\n",tmp);
    
    return 0;
}