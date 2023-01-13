#include<stdio.h>

int main(){
    int i,j,num,flag=0,x[100];

    scanf("%d",&num);

    for(i=0; i<num; i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(x[i] == x[j]){
                flag = flag + 1;
            }
        }
    }

    printf("%d\n",flag);

    return 0;
}