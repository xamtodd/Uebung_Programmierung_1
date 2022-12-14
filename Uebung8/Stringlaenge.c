#include<stdio.h>

unsigned string_length(char str[]);

int main(){
    char str[] = "Hallo Welt!";
    printf("%u", string_length(str));

    return 0;
}

unsigned string_length(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
