#include<stdio.h>

int main(){
    int i;
    int num,x,y,tmp=0;

    printf("ε₯ε\n");
    scanf("%d %d %d",&num,&x,&y);

    for(i=1;i<=num;i++){
        if(i%x == 0 || i%y == 0){
            tmp = tmp+1;
        }
    }

    printf("εΊε\n%d\n",tmp);
    

    return 0;
}