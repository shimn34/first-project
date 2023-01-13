#include<stdio.h>

int main(){
    int i;
    int x[5]={2,4,6,8,10};
    int y[5]={5,10,15,20,25};

    int z[5];

    for (i=0;i<5;i++){
        z[i]=x[i]+y[i];
        printf("%d\n",z[i]);
    }
    return 0;
}