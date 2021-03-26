//letra em C: tipo char
//a representação interna é um número inteiro
//no fundo uma letra é um número e posso fazer contas com eles
//representa usando a tabela ASCII (inclui a codificação de números)
//’a’, ’b’, ’c’, ’\n’
//printf("letra: %c, código: %d", 'a', 'a')
//imprime a letra a
//ver como executar no computador
//o espaço depois de %d faz ele esperar um espaço em branco
//o espaço antes do %c consome o caracter lixo @

# include <stdio.h>

int main () {
    int k;
    char plain, pos_plain, cripto, pos_cripto;
    printf("Digite o valor de k: ");
    scanf ("%d", &k) ;
    printf("Digite os caracteres a serem cifrados, terminados por #: ");
    scanf (" %c", &plain);
    while ( plain != '#') {
        pos_plain = plain - 'A';
        pos_cripto = ( pos_plain + k) % 26;
        cripto = 'A' + pos_cripto ;
        printf ("%c", cripto ) ;
        scanf ("%c", &plain );
    }
    printf ("\n") ;
    return 0;
}