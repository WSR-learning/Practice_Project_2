#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    char r[2*n-1][2*n-1];
    for(i=0;i<=(n-1);i=i+1){
        for(j=(n-i-1);j<=(n+i-1);j=j+1){
            r[i][j]='*';
        }
        if(i<=(n-2)){
        for(j=0;j<=(n-i-2);j=j+1){
            r[i][j]=' ';
        }
        }
    }
    for(i=n;i<=(2*n-2);i=i+1){
        for(j=(i-n+1);j<=(3*n-i-3);j=j+1){
            r[i][j]='*';
        }
        for(j=0;j<=(i-n);j=j+1){
            r[i][j]=' ';
        }
    }
    for(i=0;i<=(n-1);i=i+1){
        for(j=0;j<=(n+i-1);j=j+1){
            printf("%c",r[i][j]);
            if(j==(n+i-1)){
                printf("\n");
            }
        }
    }
    for(i=n;i<=(2*n-2);i=i+1){
        for(j=0;j<=(3*n-i-3);j=j+1){
            printf("%c",r[i][j]);
            if(j==(3*n-i-3)){
                printf("\n");
            }
        }
    }
    return 0;
}