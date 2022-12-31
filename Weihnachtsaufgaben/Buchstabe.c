#include<stdio.h>

void whichCharacter (char c);

int main(){
    whichCharacter('a');
    whichCharacter('7');
    whichCharacter('*');

    return 0;
}

void whichCharacter (char c) {
    if((c <= 47) || ((58 <= c) && (c <= 64)) || ((91 <= c) && (c <= 96)) || ((123 <= c) && (c <= 127))){
        printf("Sonderzeichen\n");
    }else if((('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z'))){
        printf("Buchstabe\n");
    }else{
        printf("Zahl\n");
    }
}
