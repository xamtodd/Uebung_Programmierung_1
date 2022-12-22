#include<stdio.h>

void buchstabe(char c);

int main(){
    buchstabe('g');
    buchstabe('F');
    buchstabe('!');
    buchstabe('5');
    buchstabe(' ');
    
    return 0;
}

void buchstabe(char c){
    if(c <= 47 || 58 <= c && c <= 64 || 91 <= c && c <= 96 || 123 <= c && c <= 127){
        printf("%c ist ein Sonderzeichen!\n", c);
    }else if('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z'){
        printf("%c ist ein Buchstabe!\n", c);
    }else{
        printf("%c ist ein Zahl!\n", c);
    }
}
