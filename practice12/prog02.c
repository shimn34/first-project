#include<stdio.h>

int main(){
    int x;
    double y,z;
    scanf("%d",&x);

    if(x == 1){
        scanf("%lf %lf",&y,&z);
        printf("%lf+%lf=%lf\n",y,z,y+z);
    }
    if(x == 2){
        scanf("%lf %lf",&y,&z);
        printf("%lf-%lf=%lf\n",y,z,y-z);
    }
    if(x == 3){
        scanf("%lf %lf",&y,&z);
        printf("%lf*%lf=%lf\n",y,z,y*z);
    }
    if(x == 4){
        scanf("%lf %lf",&y,&z);
        printf("%lf/%lf=%lf\n",y,z,y/z);
    }

   return 0;
}