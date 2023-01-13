#include<stdio.h>

int main(){
    int i,j,num,flg=0,x[100];

    scanf("%d",&num);

    for(i=0;i<num;i++){
        scanf("%d ",&x[i]);
    }

    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(x[i] + x[j] == 500){
                flg = flg + 1;
            }
        }
    }

    printf("%d\n",flg);

    return 0;
}