#include<stdio.h>

int add(int num1, int num2){
    return num1+num2;
}

int sub(int num1, int num2){
    return num1-num2;
}

int mul(int num1, int num2){
    int ans = num1*num2;
    return ans;
}

int div(int num1, int num2){
    return num1/num2;
}

int rem(int num1, int num2){
    return num1%num2;
}

int main(){
    int x = 1,y = 2;

    printf("x+y=%d\n",add(x,y));
    printf("x-y=%d\n",sub(x,y));
    printf("x*y=%d\n",mul(x,y));
    printf("x/y=%d\n",div(x,y));
    printf("x%%y=%d\n",rem(x,y));

    return 0;
}