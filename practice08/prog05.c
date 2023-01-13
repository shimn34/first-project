#include<stdio.h>
#include<string.h>

int main(){
    int i,j,y;
    char tmp,x[100];
    char str[10] = "abcdefg";

    printf("input = ");
    scanf("%s",x);
    printf("%s\n",x);  

    for(i=strlen(x);i>=0;i--){
        printf("%c",x[i]);
    }

    printf("\n");

    strcat(x,str); //xにstrの文字をくっつける
    printf("%s\n",x);
    return 0;
}