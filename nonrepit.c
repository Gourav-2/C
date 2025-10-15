
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ababde";
    int freq[256] = {0};
    int ln =strlen(str);
    for (int i=0;i<ln;i++){
        freq[str[i]]++;

    }
    for(int i=0;i<0;i++){
        if(freq[str[i]]==1){
            printf("%c",str[i]);
            break;
        }
    }

   

    
}