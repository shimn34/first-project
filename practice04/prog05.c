#include<stdio.h>
#include<math.h>

int main(){
    int i, j, num, flag, x=0;

    printf("input = ");
    scanf("%d",&num);

    for(i=2; i<=num; i++){
        flag = 0;
        if(i!=2 && i%2 == 0){
            //printf("%d\n",i);
            flag = 1;
        }
        else {
            for(j=3; j<=sqrt(i); j+=2){
                //printf("%d %d\n",i,j);
                if(i%j == 0 ){
                    flag = 1;
                    break;
                }    
            }  
        }
        if(flag == 0){
            x++;
            printf("%d ",i);
        }          
    }
    printf("\n");

    return 0;
}