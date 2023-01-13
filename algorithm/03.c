#include<stdio.h>

int main(){
    int i,num,flag=0,x[100];

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<num;i++){
        flag = flag + x[i];
    }

    printf("%d\n",flag);

    return 0;
}