#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0;
    bool teilerGefunden = false;
    
    printf("Bitte Zahl eingeben: ");
    scanf("%d", &n);
    
    //Gibt alle Primzahlen bis Zahl n aus
    for (int i = 2; i <= n; i++) {
        for (int j = 2, k = i / 2; j <= k; j++) {
            if (i % j == 0) {
                teilerGefunden = true;
            }
        }
        //Zahl ist nur durch sich selbst und durch 1 teilbar
        if (!teilerGefunden) {
            printf("%d\n", i);
        }
        teilerGefunden = false;
    }
}
