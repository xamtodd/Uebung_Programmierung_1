#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool palindrom(char str[]);

int main(){
    printf("%s\n", palindrom("anna") ? "true" : "false");
    printf("%s\n", palindrom("lagerregal") ? "true" : "false");
    printf("%s\n", palindrom("weihnachten") ? "true" : "false");
    printf("%s\n", palindrom("") ? "true" : "false");
    printf("%s\n", palindrom("A") ? "true" : "false");
    printf("%s\n", palindrom("neben") ? "true" : "false");
    printf("%s\n", palindrom("MAOAM") ? "true" : "false");
    printf("%s\n", palindrom("rentner") ? "true" : "false");
    
    return 0;
}

bool palindrom(char str[]){
    int stellen = strlen(str);
    
    if(stellen <= 1){
        return false;
    }

    //Neuen String erstellen und undrehen
    char reverseString[stellen];
    for(int i = 0; i < stellen; i++){
        reverseString[stellen - 1 - i] = str[i];
    }
    
    for(int i = 0; i < stellen; i++){
        if(str[i] != reverseString[i]){
            return false;
        }
    }
    
    return true;
}
