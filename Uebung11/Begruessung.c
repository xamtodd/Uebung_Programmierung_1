#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char eingabe[50];
    printf("Geben Sie bitte Ihren Namen ein: ");
    fgets(eingabe, 50, stdin);
    char *begruessung = malloc(sizeof(eingabe) * (sizeof(char) + 6));
    sprintf(begruessung, "Hallo %s", eingabe);
    printf("%s", begruessung);
    
    return 0;
}
