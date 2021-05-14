//Definição

typedef struct {
    int *v;
    int topo ;
} Pilha ;

typedef Pilha * p_pilha ;

//Inserção

void empilhar ( p_pilha p , int i ) {
    p ->v[p -> topo ] = i;
    p -> topo ++;
}

//Remoção

int desempilhar ( p_pilha p) {
    p -> topo - -;
    return p ->v [p -> topo ];
}