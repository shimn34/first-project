#include<stdio.h>

int main(){
    int i;
    int num,x,y,tmp=0;

    printf("入力\n");
    scanf("%d %d %d",&num,&x,&y);

    for(i=1;i<=num;i++){
        if(i%x == 0 || i%y == 0){
            tmp = tmp+1;
        }
    }

    printf("出力\n%d\n",tmp);
    

    return 0;
}