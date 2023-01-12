#include<stdio.h>

typedef struct kunde{
    unsigned long nummer;
    char name[100];
    short geb_jahr;
    unsigned short geschlecht;
}Kunde;

void einfuegen(struct kunde kdb[], int index){
    printf("-------------------\n");
    printf("Geben Sie eine Kundennummer ein: ");
    scanf("%ld", &kdb[index].nummer);
    getchar(); //Nimmt \n vor dem fgets() weg
    printf("Geben Sie einen Namen ein: ");
    fgets(kdb[index].name, 50, stdin);
    printf("Geben Sie ein ein Geburtsalter ein: ");
    scanf("%hd", &kdb[index].geb_jahr);
    printf("Gaben Sie ein Geschlecht ein! ");
    printf("(0 - d, 1 - w, 2 - m): ");
    scanf("%hd", &kdb[index].geschlecht);
    printf("-------------------\n");
}

void anzeigen(struct kunde kdb[], int index){
    printf("Kundennummer: %lu\n", kdb[index].nummer);
    printf("Name: %s", kdb[index].name);
    printf("Geburtsjahr: %hd\n", kdb[index].geb_jahr);
    printf("Geschlecht (0 - d, 1 - w, 2 - m): %d\n", kdb[index].geschlecht);
    printf("-------------------\n");
}

int main(){
    Kunde kdb[1000];
    int index = -1;
    while (1){
        printf("<1> Neuen Datensatz anlegen\n");
        printf("<2> Vorhandenen Datensatz abrufen\n");
        printf("<0> Ende\n");
        printf("Ihre Wahl: ");
        int eingabe = 0;
        scanf("%i", &eingabe);
        if(eingabe == 0){
            break;
        } else if(eingabe == 1){
            index++;
            einfuegen(kdb, index);
        } else if(eingabe == 2){
            printf("-------------------\n");
            printf("Anzuzeigender Index: ");
            int anzeigenIndex = -1;
            scanf("%d",&anzeigenIndex);
            if((anzeigenIndex <= index) && (anzeigenIndex >= 0)){
                anzeigen(kdb, anzeigenIndex);
            }else{
                printf("Index nicht vorhanden!\n");
                printf("-------------------\n");
                continue;
            }
        } else{
            printf("Ungueltige Eingabe!\n");
        }
    }

    return 0;
}

