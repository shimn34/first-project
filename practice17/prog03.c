#include<stdio.h>

double syu(int r,double x){
    return 2*r*x;
}

double men(int r,double x){
    return r*r*x;
}

int main(){
    double x=3.14;
    int r=0;

    scanf("%d",&r);

    printf("%.2lfcm\n",syu(r,x));
    printf("%.2lfcm²\n",men(r,x));

    return 0;
}