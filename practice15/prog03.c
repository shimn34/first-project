#include<stdio.h>

int main(){
    int i,j=0,num=0;

    char x[100000];

    scanf("%s",x);

    for(i=0;x[i]!=0;i++){
        if(x[i] == '0' && x[i+1] == '0'){
            i++;
        }
        j = j + 1;
    }

    printf("%d\n",j);
    
    return 0;
}