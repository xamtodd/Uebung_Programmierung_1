#include<stdio.h>
#include<string.h>

void reverse(char wort[]);

int main(){
    char wort[] = "Wort";
    reverse(wort);
    
    return 0;
}

void reverse(char wort[]){
    for(int i = strlen(wort) - 1; i >= 0; i--){
        printf("%c", wort[i]);
    }
}
