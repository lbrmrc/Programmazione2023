#include <stdio.h>
#include <string.h>

typedef struct {
    int giorno;
    char mese[20];
    int anno;
} Data;

typedef struct {
    char nome[20];
    Data nascita;
} Persona;

int main(){
    Data oggi;
    Persona p;
    printf("Inserisci la data di oggi\n");
    scanf("%d%s%d", &oggi.giorno, oggi.mese, &oggi.anno);
    
    printf("Inserisci il tuo nome e la tua data di nascita\n");
    scanf("%s", p.nome);
    scanf("%d%s%d", &p.nascita.giorno, p.nascita.mese, &p.nascita.anno);

    if (oggi.giorno == p.nascita.giorno && strcmp(oggi.mese, p.nascita.mese) == 0)
        printf("Buon compleanno\n");
}