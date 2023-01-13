#include<stdio.h>

int mul(int num1){
    int i,ans=1;
    if(0 <= num1){
        for (i=0; i<num1; i++){
            ans = ans * 2;
        }
    }
    else if(num1 < 0){
        for (i=0; i<num1*-1; i++){
            ans = ans * 2;
        }
    }

    return ans;
}

int main(){
    int x;
    scanf("%d",&x);

    if (0 <= x){
        printf("%d\n",mul(x));
    }
    else if (x < 0){
        printf("1/%d\n",mul(x));
    }

    return 0;
}