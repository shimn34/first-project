#include<stdio.h>

int main(){
    int i,flag=0,ans=0;
    char x[100];

    scanf("%s",x);

    if('A' <= x[0] && x[0] <= 'Z'){
        if('1' <= x[1] && x[1] <= '9'){
            for(i=2;i<=6;i++){
                if('0' <= x[i] && x[i] <= '9'){
                    flag = 1;
                }else{
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag == 1){
        if('A' <= x[7] && x[7] <= 'Z'){
            ans = 1;
        }
    }

    if(ans == 1){
        printf("Yes\n");
    }else if(ans == 0){
        printf("No\n");
    }

    return 0;
}