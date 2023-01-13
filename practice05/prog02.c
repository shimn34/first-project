#include<stdio.h>

int main(){
    int i, j, dan, kazu;

    printf("段数　数 = ");
    scanf("%d,%d",&dan,&kazu);

    for(i=0; i<dan; i++){
        for(j=0; j<kazu; j++){
            if(i%2 == 0){
               if(j%2 == 0){
                printf("○ ");
             }else{
                printf("● ");
                } 
            }
            else{
                if(j%2 == 0){
                printf("● ");
             }else{
                printf("○ ");
                } 
            }
            
        }
        if(kazu != 0){
            printf("\n");
        }
    }

    return 0;
}