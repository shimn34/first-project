#include<stdio.h>

int main(){
    char y[100];
    int i=0,j,x,z=0,num=1;

    scanf("%d",&x);
    
    while (x){
        y[i] = '0'+ x%2;
        x = x/2;
        i++;
    }

    int a=i;

    int tmp;
    for(int i=0;i<a/2;i++){
        tmp = y[i];
        y[i] = y[a-1-i];
        y[a-1-i] = tmp;        
    }

    for(i=0;y[i]!=0;i++){
        printf("%c",y[i]);
    }
    printf("\n");

    y[a] = '0';

    for(i=0;y[i]!=0;i++){
        printf("%c",y[i]);
    }
    printf("\n");

    for(i=0;y[i]!=0;i++){
        if(y[i] == '1'){
            for(j=0;j<a-i;j++){
                num = num * 2;
            }
            z = z + num;
        }
        num=1;
    }

    printf("%d\n",z);

    return  0;
}
    