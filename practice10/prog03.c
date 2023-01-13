#include<stdio.h>

char *let(char str1[100]){
    int i;//printf("%s\n",str1);
    
    for(i=0; str1[i]!=0; i++){
        str1[i] = str1[i] - 32;
    }

    return str1;

}

int main(){
    char x[100];
    scanf("%s",x);

    printf("%s\n",let(x));

    return 0;
}

//-32