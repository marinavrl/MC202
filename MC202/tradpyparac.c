# include < stdio .h >

/*Biblioteca de entradas e sáidas
standard input output (printf e scanf)*/

int maximo ( int a , int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int potencia ( int a , int b) {
    int i , prod = 1;
    for (i = 0; i < b; i ++) {
        prod = a * prod ;
    }
    return prod ;
}

/*i = 0 é valor inicial
i < b é a condição até onde vai i
i ++ é o que faz com i a cada iteração (após o bloco
e antes de testar a condição novamente)*/

int main () {
    int a, b, maior, pot;
    printf ("Entre com a e b\n");
    scanf ("%d %d", &a , & b);
    maior = maximo (a , b) ;
    pot = potencia (a , b);
    printf ("Maior : %d\n", maior )
        ;
    printf ("a^b: %d\n", pot ) ;
    return 0;
}

/*Se devolver 0 significa que não houve erros
– Valores diferentes indicam o erro que ocorreu
olhar numa tabela pra saber qual o erro ao qual
o valor se refere*/

/*Interpretador de python e seu programa, abre dois.
Em c abre direto compilador, gera um arquivo
 executável.*/