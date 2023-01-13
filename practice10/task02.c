#include<stdio.h>

int SearchY(int num01, int num02){
    int tmp,num=1,i,min;
    
    if(num01>num02){
        min = num02;
    }else{
        min = num01;
    }

    for(i=1; i<=min; i++){
        if(num01%i == 0 && num02%i == 0){
            num = i;
        }
    }

    return num;
}

int main(){
    int i,j,x,y,N,z[100],tmp,ans=0;

    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d",&z[i]);
    }

    for(i=0;i<N-1;i++){
        if(i==0){
            ans = SearchY(z[i],z[i+1]);
        }else{
            ans = SearchY(ans, z[i+1]);
        }
        
    }

    printf("%d",ans);

    printf("\n");

    return 0;
}