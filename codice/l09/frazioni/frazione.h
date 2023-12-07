// interfaccia del ADT Frazione

typedef struct
{
    int numeratore;
    int denominatore;
} Frazione;

void frazione(int n, int d, Frazione *pf);

int num(Frazione fr);
int den(Frazione fr);

void opposto(Frazione *pf, Frazione *pfo);
void inverso(Frazione *pf, Frazione *pfi);

Frazione somma(Frazione *pf1, Frazione *pf2, Frazione *pfs);
Frazione differenza(Frazione *pf1, Frazione *pf2, Frazione *pfd);
Frazione prodotto(Frazione *pf1, Frazione *pf2, Frazione *pfp);
Frazione quoziente(Frazione *pf1, Frazione *pf2, Frazione *pfq);

void stampaFrazionaria(Frazione fr);
void stampaDecimale(Frazione fr);
Frazione leggiFrazione(Frazione *pfr);