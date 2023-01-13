#include<stdio.h>

int SearchY(int num01, int num02){
    int tmp,num=1,i,min;
    
    if(num01>num02){
        min = num02;
    }else{
        min = num01;
    }
    
    /*if(num01 > num02){
        tmp = num01;
        num01 = num02;
        num02 = tmp;
    }*/

    for(i=1; i<=min; i++){
        if(num01%i == 0 && num02%i == 0){
            num = i;
        }
    }

    return num;
}

int main(){
    int x,y,num,i;

    scanf("%d %d",&x,&y);   //小:x  大:y
    printf("%d\n",SearchY(x,y));

    return 0;
}