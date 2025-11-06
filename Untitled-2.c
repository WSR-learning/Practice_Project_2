#include<stdio.h>
int main(){
    char a[100];
    int i=(-1),b=0,c=0,d=0,e=0;
    gets(a);
    while(1){
        i=i+1;
        if(a[i]=='\0'){
            break;
        }
        else{
            if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')){
            b=b+1;
            }
            else if(a[i]==' '){
                c=c+1;
            }
            else if(a[i]>='0' && a[i]<='9'){
                d=d+1;
            }
            else{
                e=e+1;
            }
        }
    }
    printf("%d %d %d %d\n",b,c,d,e);
    return 0;
}