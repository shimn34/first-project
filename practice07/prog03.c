#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i=0,count=0,flag=1,j=0,scale=7,a=0;
    int num[3];
    srand(time(NULL));

    while(j<100000){
        while(1){
            flag = 1;
            for(i=0;i<3;i++){
                num[i] = rand()%scale;
            } 
            for (i = 0; i < 3; i++){
                if(num[i] != 1){
                    flag = 0;
                }
            }
            count++;
            if(flag==1)break;
        }

        //printf("%d%d%d %d\n",num[0],num[1],num[2],count);
        a = a+count;
        count=0;
        j++;
    }

    printf("\n1/%d\n",a/j);

    return 0;
}