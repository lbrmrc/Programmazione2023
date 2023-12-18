// record
typedef struct {
  char nome[31];
  float calorie; // 100 grammi dell'alimento
} Alimento;

typedef struct nodo {
  Alimento dato;
  struct nodo *next;
} Nodo;

typedef Nodo* Lista;

void caricaCalorie(char nomeFileBinario[], Lista *pl);
float calorieAlimento(char nomeAlimento[], Lista l);