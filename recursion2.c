#include<stdio.h>
void sum(int a){
    if(a==0){
        return;

    }
    printf("%d",a);
    sum(a-1);
   
}
int main(){
    sum(5);
}
