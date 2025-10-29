#include<stdio.h>
#include <string.h>
int main (){
    char str[]="hello";
    char tar ='e';
    char nstr[100];
    int j=0;
    int ln = strlen(str);
    for(int i=0;i<ln;i++){
        if (str[i]!=tar){
            nstr[j]=str[i];
            j++;
        }
   

    }
    // nstr[j]="\0";
    printf("%s",nstr);


                        
}