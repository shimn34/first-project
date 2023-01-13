#include<stdio.h>

int main(){
    int num;
    printf("input = ");
    scanf("%d",&num);
    if (num <= 10 || 100 <= num){ // || = または && = and 
        printf("Hello World\n");
    } else if (num == 50){
        printf("Hello World\n");
    } else {
        printf("error!\n");
    }
    
    return 0;
}

for(int i=0; i<100; i++){
        printf("%d",i);
        if(i==10)break;  
    }