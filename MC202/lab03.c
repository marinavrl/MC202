/* Estruturas (structs), tambem conhecidos como registros, e apontadores na linguagem C. */
/* Fazer a leitura, ordenacao e escrita de uma lista de registros. */
/* Cada registro contem a informacao de um aluno: o RA, a data de nascimento ou o nome.*/
/* O criterio de ordenacao sera dado como parte da entrada e podera ser o RA, a data ou o nome.*/

#include <stdio.h>
#include <string.h> /*comparacao de strings*/
#define MAX 50

/* Ordenar com o Bubble Sort */

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Aluno {
    int ra;
    struct Data nascimento;
    char nome[50];
};

//A implementacao deve ser feita utilizando um vetor de apontadores para o tipo Aluno.

int main() {
    int n;

    scanf("%d", &n);

    int i;

    for (i = 1; i <= n; i++) {
        struct Aluno aluno;
        scanf("%d %d %d %d %s", &aluno.ra , &aluno.nascimento.dia, &aluno.nascimento.mes, aluno.nascimento.ano, aluno.nome);
    };

    char ordem;

    fgets(ordem, 1, stdin);

    //Imprimindo os dados

    struct Aluno aluno;
    printf(" Aluno : %s\n", aluno.nome);

    struct Aluno aluno;
    printf(" RA : %d\n", aluno.ra);

    //Imprimindo o aniversário
    printf(" Aniversario : %d/%d/%d\n", aluno.nascimento.dia, aluno.nascimento.mes, aluno.nascimento.ano);

}