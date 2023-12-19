#include <stdio.h>

typedef enum { Quadrato, Rettangolo } TipoFigura;

typedef struct {
  float lato;
} DatiQuadrato;

typedef struct {
  float base;
  float altezza;
} DatiRettangolo;

typedef union {
    DatiQuadrato datiQuadrato;
    DatiRettangolo datiRettangolo;
} DatiFigura;

typedef struct {
    TipoFigura tipo;
    DatiFigura dati;
} Figura;

void assegnaQuadrato(Figura *pf, float l){
    pf->tipo=Quadrato;
    pf->dati.datiQuadrato.lato = l;
}

void assegnaRettangolo(Figura *pf, float b, float h){
    pf->tipo = Rettangolo;
    pf->dati.datiRettangolo.base = b;
    pf->dati.datiRettangolo.altezza =h;
}

float area(Figura f){
    switch(f.tipo){
        case Quadrato:
            return f.dati.datiQuadrato.lato * f.dati.datiQuadrato.lato;
        case Rettangolo:
            return f.dati.datiRettangolo.base * f.dati.datiRettangolo.altezza;
    }
}

float perimetro(Figura f){
    switch(f.tipo){
        case Quadrato:
            return 4 * f.dati.datiQuadrato.lato;
        case Rettangolo:
            return 2 * (f.dati.datiRettangolo.base + f.dati.datiRettangolo.altezza);
    }
}

int main(){
    Figura f;
    assegnaQuadrato(&f, 2.5);
    printf("Area: %f\n", area(f));
    printf("Perimetro: %f\n", perimetro(f));

    assegnaRettangolo(&f, 2.3, 1.6);
    printf("Area: %f\n", area(f));
    printf("Perimetro: %f\n", perimetro(f));

    return 0;
}