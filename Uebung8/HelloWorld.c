#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Wie lautet Ihr Name? ");
    scanf("%s", str);
    printf("Hallo ");
    for(int i = 0; i < strlen(str); i++){
        printf("%c", str[i]);
    }
    printf("!\n");
    
    return 0;
}
