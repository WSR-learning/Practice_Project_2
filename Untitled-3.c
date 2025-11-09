#include<stdio.h>
int main(){
    int l,c,i,j,k,t;
    scanf("%d %d",&l,&c);
    char a[4*l+1][6*c+1];
    for(i=0;i<(4*l+1);i=i+4){
        for(j=0;j<(6*c+1);j=j+6){
            a[i][j]='|';
        }
        for(k=0;k<5;k=k+1){
            for(j=1;j<6*c;j=j+6){
                a[i][j+k]='*';
            }
        }
    }
    for(i=0;i<=2;i=i+2){
        for(j=1;j<4*l;j=j+4){
            for(k=0;k<(6*c+1);k=k+3){
                a[i+j][k]='|';
            }
            for(t=0;t<2;t=t+1){
                for(k=1;k<6*c;k=k+3){
                    a[i+j][t+k]=' ';
                }
            }
        }
    }
    for(i=2;i<4*l;i=i+4){
        for(j=0;j<=6*c;j=j+6){
            a[i][j]='|';
        }
        for(t=0;t<2;t=t+1){
            for(k=1;k<6*c;k=k+3){
                a[i][k+t]='-';
            }
        }
        for(j=3;j<6*c;j=j+6){
            a[i][j]='+';
        }
    }
    for(i=0;i<(4*l+1);i=i+1){
        for(j=0;j<(6*c+1);j=j+1){
            printf("%c",a[i][j]);
            if(j==(6*c)){
                printf("\n");
            }
        }
    }
    return 0;
}