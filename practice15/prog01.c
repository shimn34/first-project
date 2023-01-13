#include<stdio.h>

int main(){
    int i,a,b,c=1;

    scanf("%d %d",&a,&b);

    for(i=0;i<b;i++){
        c = c * a;
    }

    printf("%d\n",c);

    return 0;
}