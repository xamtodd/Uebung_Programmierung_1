#include<stdio.h>

void changeLetters (char str[]);

int main(){
    char str[] = "Das ist ein Test.";
    changeLetters(str);
    printf("%s", str);
    
    return 0;
}

void changeLetters (char str[]) {
    int i = 0;
    while(str[i] != '\0'){
        if (str[i] == 't' || str[i] == 'T') {
            str[i] = '7';
        }
        if (str[i] == 'o' || str[i] == 'O') {
            str[i] = '0';
        }
        if (str[i] == 'e' || str[i] == 'E') {
            str[i] = '3';
        }
        i++;
    }
}
