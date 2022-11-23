#include<stdio.h>

int main(){
    FILE *fp = NULL;
    int max, counter = 0;
    
    if((fp = fopen("werte.txt", "r"))){
        //Werte aus Datei auslesen
        while(!feof(fp)){
            int zahl;
            
            int i = fscanf(fp, "%d", &zahl);
            if(max < zahl || counter == 0){
                max = zahl;
            }
            printf("%d\n", zahl);
            counter++;
            
            if(i <= 0){
                break;
            }
        }
        fclose(fp);
        
        //In neue Datei schreiben
        fp = fopen("ergebnis.txt", "w");
        if(fp != NULL){
            fprintf(fp, "%d", max);
        }else{
            printf("Datei Fehler!\n");
        }
        fclose(fp);
    }else{
        printf("Datei kann nicht geoeffnet werden!\n");
    }
    
    return 0;
}
