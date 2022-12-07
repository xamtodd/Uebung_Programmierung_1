#include <stdio.h>
#include <stdbool.h>

void ausgabe(char spielfeld[][3]);
bool pruefeSpielende(char spielfeld[][3]);
void neuerZug(char spielfeld[][3], char zeichen);
bool pruefeEingabe(char spielfeld[][3], int zeile, int reihe);

int main(){
    bool fertig = false;
    char spielfeld[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int i = 0;

    while(true){
        ausgabe(spielfeld);
        if(pruefeSpielende(spielfeld)){
            printf("Gewinnen hat Spieler: %c\n", (i % 2) ? 'X' : 'O');
            break;
        }
        (i % 2 == 0) ? neuerZug(spielfeld, 'X') : neuerZug(spielfeld, 'O');
        i++;
        if((i == 9)){
            if(pruefeSpielende(spielfeld)){
                ausgabe(spielfeld);
                printf("Gewinnen hat Spieler: %c\n", (i % 2) ? 'X' : 'O');
                break;
            }
            ausgabe(spielfeld);
            printf("Unentschieden!\n");
            break;
        }
    }
    
    return 0;
}

void ausgabe(char spielfeld[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("|%c|", spielfeld[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

bool pruefeSpielende(char spielfeld[][3]){
    if
    //In Reihe gewinnnen
    ((spielfeld[0][0] == spielfeld[0][1]) && (spielfeld[0][1] == spielfeld[0][2] && spielfeld[0][0] != ' ') ||
    (spielfeld[1][0] == spielfeld[1][1]) && (spielfeld[1][1] == spielfeld[1][2] && spielfeld[1][0] != ' ') ||
    (spielfeld[2][0] == spielfeld[2][1]) && (spielfeld[2][1] == spielfeld[2][2] && spielfeld[2][0] != ' ')){
        return 1;
    } else if
    //In Zeile gewinnen
    ((spielfeld[0][0] == spielfeld[1][0]) && (spielfeld[1][0] == spielfeld[2][0] && spielfeld[0][0] != ' ') ||
    (spielfeld[0][1] == spielfeld[1][1]) && (spielfeld[1][1] == spielfeld[2][1] && spielfeld[0][1] != ' ') ||
    (spielfeld[0][2] == spielfeld[1][2]) && (spielfeld[1][2] == spielfeld[2][2] && spielfeld[0][2] != ' ')){
        return 1;
    } else if
    //Im Kreuz gewonnen
    ((spielfeld[0][0] == spielfeld[1][1]) && (spielfeld[1][1] == spielfeld[2][2] && spielfeld[0][0] != ' ') ||
    (spielfeld[0][2] == spielfeld[1][1]) && (spielfeld[1][1] == spielfeld[2][0] && spielfeld[1][1] != ' ')){
        return 1;
    }else{
        return 0;
    }
}

void neuerZug(char spielfeld[][3], char zeichen){
    int zeile;
    int reihe;
    printf("Am Zug: %c\n", zeichen);
    printf("Zeile: ");
    scanf("%d", &zeile);
    printf("Reihe: ");
    scanf("%d", &reihe);

    bool test = pruefeEingabe(spielfeld, zeile, reihe);
    if(test) {
        spielfeld[zeile - 1][reihe - 1] = zeichen;
    }else{
        neuerZug(spielfeld, zeichen);
    }
}

bool pruefeEingabe(char spielfeld[][3], int zeile, int reihe){
    zeile = zeile - 1;
    reihe = reihe - 1;
    if((zeile < 0) || (zeile > 2)){
        return 0;
    }else if((reihe < 0) || (reihe > 2)){
        return 0;
    }else if(spielfeld[zeile][reihe] == 'X' || spielfeld[zeile][reihe] == 'O'){
        return 0;
    }else{
        return 1;
    }
}
