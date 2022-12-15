#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Wie lautet Ihr Name? ");
    fgets(str, 50, stdin);
    printf("Hallo ");
    for(int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
    }
    
    return 0;
}
