#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3
#define MAX 20
//tem que usar matriz, acho

int main() {
    setlocale(LC_ALL, "");

    int palavras[TAM][MAX];
    int i, contador;
    char aux;

    printf("Entre com dos 3 palavras para preencher o array e pressione enter apos digitar cada uma: \n");
    for (i = 0; i < TAM; i++) {
        scanf("%s", &palavras[i]);
    }

    printf("Ordem atual dos itens no array: \n");

    for (i = 0; i < TAM; i++) {
        printf("%s", palavras[i]);
    }
    // Algoritmo de ordenação Bubblesort:
    for (contador = 1; contador < TAM; contador++) {
        for (i = 0; i < TAM - 1; i++) {
            if (palavras[i] > palavras[i+1]) {
                aux = palavras[i];
                palavras[i] = palavras[i+1];
                palavras[i+1] = aux;
            }
        }
    }
    printf("\nElementos do array em ordem crescente:\n");
    for (i = 0; i < TAM; i++) {
        printf("%s", palavras[i]);
    }

    printf("\n");

    return 0;
}