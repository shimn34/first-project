#include<stdio.h>
#include<math.h>

double Men(double r){
    double s;
    double PI = M_PI;
    s = r*r*M_PI;
    return s;
}

int main(){
    int a;
    double x;

    scanf("%lf",&x);

    printf("%lf\n",Men(x));

    return 0;
}