#include<stdio.h>
#include<string.h>
int main(){
    char a[]="hello";
    char b[]="hii";
    char c[100];
    int lna =strlen(a);
    int lnb =strlen(b);
    for(int i=0;i<lna;i++){
        for(int j=0;j<lnb;j++){
            if(a[i]==b[j]){
                a[i]=c[j];
                break;
            }
        }

    }
    printf("%c",c);
}