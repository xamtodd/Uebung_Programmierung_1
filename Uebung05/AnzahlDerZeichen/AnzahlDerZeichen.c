#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *fp = NULL;
    int anzBuchstaben = -2, anzA = 0, anzE = 0, anzI = 0, anzO = 0, anzU = 0;
    char zeichen;
    
    if((fp = fopen("test.txt", "r"))){
        
        while(!feof(fp)){
            zeichen = tolower(fgetc(fp));
            switch(zeichen){
                case 'a': anzA++; break;
                case 'e': anzE++; break;
                case 'i': anzI++; break;
                case 'o': anzO++; break;
                case 'u': anzU++; break;
                default: break;
            }
            anzBuchstaben++;
        }
        fclose(fp);
        
        printf("Anzahl der Buchstaben: %d\n", anzBuchstaben);
        printf("Anzahl von A: %d\n", anzA);
        printf("Anzahl von E: %d\n", anzE);
        printf("Anzahl von I: %d\n", anzI);
        printf("Anzahl von O: %d\n", anzO);
        printf("Anzahl von U: %d\n", anzU);
    }else{
        printf("Fehler\n");
    }
    
    return 0;
}
