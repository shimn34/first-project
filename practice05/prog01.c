#include<stdio.h>

int main(){
    int i, j, num;

    printf("段数 = ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        if(i%2 == 0){
            printf("○ ● ○ ● ○ ●\n");
        }else{
            printf("● ○ ● ○ ● ○\n");
        }
    }

    return 0;
}