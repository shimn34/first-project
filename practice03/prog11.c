#include<stdio.h>

int main(){
    int i, j, takasa, kazu, saidai, space;

    printf("input = ");
    scanf("%d",&takasa);

    saidai=2*takasa-1;

    for(i=1; i<=takasa; i++){
        kazu=i*2-1;
        space=(saidai-kazu)/2;
        for(j=1; j<=space; j++){
            printf(" ");
        }
        for(j=1; j<=kazu; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}