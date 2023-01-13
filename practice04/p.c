#include<stdio.h>
#include<math.h>

int main(){
    int i, j, num, flag, x=0;

    printf("input = ");
    scanf("%d",&num);

    for(i=2; i<=num; i++){
        flag = 0;
          for(j=2; j<=i-1; j++){
               //printf("%d %d\n",i,j);
            if(i%j == 0 ){
                flag = 1;
                break;
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