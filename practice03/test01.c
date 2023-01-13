#include<stdio.h>

int main(){
    int i, takasa;

    printf("段数 = ");
    scanf("%d",&takasa);
    printf("\n");

    for(i=1; i<=takasa; i++){
        for(int a=1; a<=i; a++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(i=1; i<=takasa; i++){
        for(int b=1; b<=takasa-i; b++){
            printf(" ");
        }
        for(int b=1; b<=i; b++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(i=1; i<=takasa; i++){
        for(int c=1; c<=takasa-i; c++){
            printf(" ");
        }
        for(int c=1; c<=2*i-1; c++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}