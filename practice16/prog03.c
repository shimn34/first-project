#include<stdio.h>

int main(){
    int i,j,num01,n=1;
    long long t, s=0,z=0,a;

    scanf("%d %lld",&num01,&t);

    long long x[num01+1];

    for(i=0;i<num01;i++){
        scanf("%lld",&x[i]);
    }

    //printf("t : %lld\n",t);

    /*while(n){
        for(j=0;j<num01;j++){
            y = y + x[j];
            //printf("now: %lld\n",y);
            if(t < y){
                printf("%d %lld\n",j+1,t-y+x[j]);
                n = 0;
                break;
            }
        }
    }*/

    for(i=0;i<num01;i++){
        s = s + x[i]; 
    }

    a = t%s;
    s = 0;

    for(i=0;i<num01;i++){
        s = s + x[i];
        if(a < s){
            printf("%d %lld\n",i+1,a-s+x[i]);
            break;
        }
    }

    return 0;
}