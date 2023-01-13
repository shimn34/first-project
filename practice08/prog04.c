#include<stdio.h>

int main(){
    int i,j;
    char tmp,x[100];

    printf("input = ");
    scanf("%s",x);
    printf("%s\n",x);

    for(i=0;x[i]!=0;i++){
        if('A'<=x[i] && x[i]<='Z'){
            for(j=i+1;x[j]!=0;j++){
                if(x[i]>x[j]){
                    tmp = x[i];
                    x[i] = x[j];
                    x[j] = tmp;
                }
            }
        }
        else{
            break;
        }
    }

    for(i=0;x[i]!=0;i++){
        printf("%c",x[i]);
    }

    printf("\n");

    return 0;
}