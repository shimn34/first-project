#include<stdio.h>

int main(){
    int i=0;
    char y[100];

    printf ("input = ");
    scanf ("%s",y);
    printf ("%s\n",y);   

    for(i=0;y[i]!=0;i++){
        if('a'<=y[i] && y[i]<='z'){
            printf("%c",y[i]-32);
        }
        else if('A'<=y[i] && y[i]<='Z'){
            printf("%c",y[i]+32);
        }
        else{
            printf("%c",y[i]);
        }
    }

    printf("\n");

    return 0;
}