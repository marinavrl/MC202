/*ler três vetores: dois de números flutuantes e outro de caracteres.
O vetor de caracteres contém operadores (binários) aritméticos, os 
quais devem ser aplicados sobre os números flutuantes.*/

/*Cada arquivo contém 4 linhas
primeira: número inteiro (%d) n -- tamanho dos vetores
a serem lidos;
segunda e quarta: n números de ponto flutuante (%f)
terceira: n caracteres (%c) -- operadores
n <= 100000

4
1.4 2.3 3.2 4.1
+ - * /
1.1 2.2 3.3 4.4
*/

# include <stdio.h>
# include <stdlib.h>
# define MAX 1000

int main () {
    int n, i;
    scanf("%d", &n);
    float lista1[n];
    for (i = 0; i < n; i ++)
        scanf("%f", &lista1[i]);
    char vetor[MAX];
    for (i = 0; i < n; i ++)
        scanf("%s", &vetor[i]);
    float lista3[n];
    for (i = 0; i < n; i ++)
        scanf("%f", &lista3[i]);
    for (i = 0; i < n; i ++) {
        float result;
        if (vetor[i] == '+') {
            result = lista1[i] + lista3[i];
            printf("%.1f ", lista1[i]);
            printf("%c ", vetor[i]);
            printf("%.1f ", lista3[i]);
            printf("= ");
            printf("%.4f\n", result);
        }
        if (vetor[i] == '-') {
            result = lista1[i] - lista3[i];
            printf("%.1f ", lista1[i]);
            printf("%c ", vetor[i]);
            printf("%.1f ", lista3[i]);
            printf("= ");
            printf("%.4f\n", result);
        }
        if (vetor[i] == '*') {
            result = lista1[i] * lista3[i];
            printf("%.1f ", lista1[i]);
            printf("%c ", vetor[i]);
            printf("%.1f ", lista3[i]);
            printf("= ");
            printf("%.4f\n", result);
        }
        if (vetor[i] == '/') {
            result = lista1[i] / lista3[i];
            printf("%.1f ", lista1[i]);
            printf("%c ", vetor[i]);
            printf("%.1f ", lista3[i]);
            printf("= ");
            printf("%.4f\n", result);
        }
    }
    return 0;
}

/*leitura da lista ok!*/
/*leitura vetores OK!*/
/*operações OK!*/
/*FALTA IMPRESSÃO CORRETA!*/
/*
1.4 + 1.1 = 2.5000
2.3 - 2.2 = 0.1000
3.2 * 3.3 = 10.5600
4.1 / 4.4 = 0.9318
*/
/*char lista2[n];
    for (i = 0; i < n; i ++)
        scanf("%c", &lista2[i]);

printf("%c\n", lista2[i]);
*/