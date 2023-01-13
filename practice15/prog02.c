#include<stdio.h>

int main(){
    int i,num01,num02,a,b;

    scanf("%d",&num01);

    int x[num01];

    for(i=0;i<num01;i++){
        scanf("%d",&x[i]);
    }

    scanf("%d",&num02);

    int y[num02][3];

    for(i=0;i<num02;i++){
        scanf("%d %d",&y[i][0],&y[i][1]);
        if(y[i][0] == 2){
            y[i][2] = -1;
        }else{
            scanf("%d",&y[i][2]);
        }
    }

    /*for(i=0;i<num02;i++){
        for(int j=0;j<3;j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }*/

    for(i=0;i<num02;i++){
        if(y[i][0] == 2){
            printf("%d\n",x[y[i][1]-1]);
        }else{
            x[y[i][1]-1] = y[i][2];
        }
    }

    return 0;
}