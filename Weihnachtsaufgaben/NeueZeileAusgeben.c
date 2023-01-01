#include<stdio.h>

void newLines (char str[]);

int main(){
    char str[] = "Frohe Weihnachten";
    //char str[] = "X XX XXX XXXX XXXXX +";
    newLines(str);
    
    return 0;
}

void newLines (char str[]) {
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] != ' '){
            printf("%c", str[i]);
        }else{
            printf("\n");
        }
        i++;
    }
}
