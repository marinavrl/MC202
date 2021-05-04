#include <stdio.h>
#include <string.h>

struct data {
    int dia;
    int mes;
    int ano;
};

struct ficha_aluno {
    int ra;
    int telefone;
    char nome[50];
    char endereco[100];
};

int main() {

    struct data nascimento;

    printf("Digite a data de nascimento do aluno na ordem dia, mes, ano, separados por espaço:\n");
    scanf("%d %d %d", &nascimento.dia , &nascimento.mes, &nascimento.ano);

    struct ficha_aluno aluno;

    printf("Digite o ra do aluno:\n");
    scanf("%d", &aluno.ra);

    printf("Digite o telefone do aluno:\n");
    scanf("%d", &aluno.telefone);
    while ((getchar()) != '\n');

    printf("Digite o nome:\n");
    fgets(aluno.nome, 50, stdin);

    printf("Digite o endereço:\n");
    fgets(aluno.endereco, 100, stdin);

    //Imprimindo o dados do aluno
    printf(" Aluno : %s\n", aluno.nome);
    printf(" Ra : %d\n", aluno.ra);
    printf(" Telefone : %d\n", aluno.telefone);
    printf(" Endereço : %s\n", aluno.endereco);

    //Imprimindo o aniversário
    printf(" Aniversario : %d/%d\n", nascimento.dia, nascimento.mes);

    return 0;
}