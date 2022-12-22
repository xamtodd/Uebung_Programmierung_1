#include<stdio.h>
#include<string.h>

void ausgeben(char satz[]);

int main(){
    char satz[] = "Hallo ich bin Max!";
    ausgeben(satz);
    
    return 0;
}

void ausgeben(char satz[]){
    for(int i = 0; i < strlen(satz); i++){
        if(satz[i] == ' '){
            printf("\n");
        }else{
            printf("%c", satz[i]);
        }
    }
}
