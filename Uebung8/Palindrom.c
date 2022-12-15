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
    int laenge = strlen(str);
    
    if(laenge <= 1){
        return false;
    }
    
    for(int i = 0; i < laenge / 2; i++){
        if(str[i] != str[laenge - i - 1]){
            return false;
        }
    }
    
    return true;
}
