#include<stdio.h>

int main(){
    int i,j,m,num1,num2,flg=0;
    char a[3][3],x,o;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j] = ' ';
        }
    }

    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j == 1){
                printf("|%c|",a[i][j]);
            }else{
                printf("%c",a[i][j]);
            }
        }
        printf("\n");
    }

    for(i=0;i<9;i++){
        while(1){
            printf("横　縦 : ");
            scanf("%d %d",&num1,&num2);
            if(a[num1][num2] != ' '){
                printf("Choose other space\n");
            }else break;
        }
        
        if(i%2==1){
            a[num1][num2] = 'o';
        }
        else if(i%2==0){
            a[num1][num2] = 'x';
        }
        for(j=0;j<3;j++){
            for(m=0;m<3;m++){
                if(m==1){
                    printf("|%c|",a[j][m]);
                }
                else{
                    printf("%c",a[j][m]);
                }
            }
            printf("\n");
        }

        //W
        for(j=0;j<3;j++){
            if(a[j][0] == a[j][1] && a[j][0] == a[j][2] && a[j][0] != ' '){
                printf("%c is win!\n",a[j][0]);
                flg = 1;
            }
            if (flg == 1)break;
        }
        if (flg == 1)break;

        //H
        for(j=0;j<3;j++){
            if(a[0][j] == a[1][j] && a[0][j] == a[2][j] && a[0][j] != ' '){
                printf("%c is win!\n",a[0][j]);
                flg = 1;
            }
            if (flg == 1)break;
        }
        if (flg == 1)break;

        //l->r
        if(a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[1][1] != ' '){
            printf("%c is win!\n",a[1][1]);
            flg = 1;
        }
        if (flg == 1)break;

        //r->l
        if(a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[1][1] != ' '){
            printf("%c is win!\n",a[1][1]);
            flg = 1;
        }
        if (flg == 1)break;
    }
    if (flg == 0){
        printf("Draw...\n");
    }


    return 0;
}