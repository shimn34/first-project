#include<stdio.h>

int main(){
    int i,flag=0;
    char s[4];

    scanf("%s",s);
    s[3]=0;

    for(i=0;i<3;i++){
        if(s[i] == '1'){
            flag = flag +1;
        }
    }

    printf("%d\n",flag);

    return 0;
}