#include<stdio.h>
#include<string.h>

#define MAX_STRLEN 80
#define NUM_PASSWDS 3
// Liste aller gueltigen Passwoerter, global = pfui
char passwd[NUM_PASSWDS][MAX_STRLEN] = {
    "123foo", "bar456", "bla_blubb"
};
// Argument pass ist der in der main eingegebene String, der zu testen ist
int pwAbfrage (char pass[]);


int main(){
    char pass[MAX_STRLEN];
    int check = 0;
    for(int i = 0; i < 3; i++){
        printf("%d. Eingabe Versuch: ", i + 1);
        scanf("%s", pass);
        check = pwAbfrage(pass);
        if(check){
            break;
        }
    }
    if(!check){
        printf("Alle drei Passwörter ungueltig!\n");
    }else{
        printf("Passwort mit dem Index %d war gueltig!\n", check - 1);
    }
    
    return 0;
}

int pwAbfrage(char pass[]){
    if(!strcmp(pass, passwd[0])){
        return 1;
    }else if(!strcmp(pass, passwd[1])){
        return 2;
    }else if(!strcmp(pass, passwd[2])){
        return 3;
    }else{
        return 0;
    }
}

