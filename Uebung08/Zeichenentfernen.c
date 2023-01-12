#include<stdio.h>
#include<string.h>

void entferne(char str[], char c);
void ausgeben(char arr[], int);

int main(){
    char str[] = "xMax";
    ausgeben(str, strlen(str));
    entferne(str, 'x');
    ausgeben(str, strlen(str));
    
    return 0;
}

void entferne(char str[], char c){
    int stellen = strlen(str);
    int sperre = 0;
    if(stellen != 0 && strchr(str, c) != NULL){
        char str2[stellen - 1];
        int index = 0;
        while(str[index] != c){
            str2[index] = str[index];
            index++;
        }
        for(int i = index; i < stellen; i++){
            str2[i] = str[i + 1];
        }
        strcpy(str, str2);
    }
}

void ausgeben(char arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
