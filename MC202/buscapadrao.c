//Texto vem na forma de um vetores de caracteres
//Strings em C (slides)
//código com tamanho da string
void imprime_trecho ( char texto [] , int ini , int tam ) {
    int j;
    printf ("%d: ", ini ) ;
    for (j = 0; j < tam ; j ++)
        printf ("%c", texto [ ini + j ]) ;
    printf ("\n") ;
}

int ocorre ( char texto [] , int pos , char padrao []) {
    int j;
    for (j = 0; padrao [ j] != '\0 '; j ++)
        if ( texto [ pos +j ] == '\0 ' ||
            ( texto [ pos +j] != padrao [ j] && padrao [j] != '*'))
            return 0;
    return 1;
}

int main () {
    int i;
    char texto [ MAX ] , padrao [ MAX ];
    scanf ("%s ", padrao );
    fgets ( texto , MAX , stdin );
    printf (" Procurando por %s no texto : %s\n", padrao , texto );
    for (i = 0; texto [i ] != '\0 '; i ++)
        if ( ocorre ( texto , i , padrao ))
            imprime_trecho ( texto , i , tamanho ( padrao ));
    return 0;
}

