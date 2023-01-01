#include<stdio.h>

void toUppercase (char str[]);

int main(){ 
    char str[] = "Alle meine Entchen..";
    toUppercase(str);
    printf("%s", str);
    
    return 0;
}

void toUppercase (char str[]) {
    int anz = 0;
    while(str[anz] != '\0'){
        anz++;
    }
    for(int i = 0; i < anz; i++){
        if(str[i] != ' '){
            if(str[i] >= 97){ //Kleiner Buchstabe
                str[i] = str[i] - 32;
            }
        }
    }
}
