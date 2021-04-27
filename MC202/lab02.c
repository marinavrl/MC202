/*Cada arquivo de entrada possui 2 (duas) linhas.
A primeira linha contem o texto base onde as ocorrencias
do padrao devem ser encontradas; 500
Na segunda linha esta o padrao que deve ser pesquisado,
30*/

/*Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut porttitor augue lacinia
lorem blandit, nec aliquam justo rutrum. Suspendisse lacinia sapien eleifend eros
placerat.
lorems*/

/*limite de tamanho de entrada*/

# include <stdio.h>
# include <stdlib.h>
# define MAX0 500
# define MAX1 30

/* verificar se padrão ocorre em uma posição do texto: */

int ocorre(char texto[], int pos, char padrao[]){
    /*posiçao ja definida, no lab tem que identificar*/
    pos = 0
    int j;
    for (j = 0; padrao [j] != '\0'; j ++)
        if (texto[pos+j] == '\0' ||
        (texto[pos+j] != padrao[j] && padrao [j] != '*'))
            return 0;
    return 1;
}

/* imprimir um trecho do texto: versão  pior*/

void imprime_trecho(char texto[], int ini, int tam) {
    int j;
    printf ("%d: ", ini ) ;
    for (j = 0; j < tam ; j ++)
        printf ("%c", texto [ ini + j ]) ;
    printf ("\n") ;
}

/*versão melhor*/



/* medir o tamanho de uma string: */

int tamanho(char string[]) {
/* Tamanho do texto*/
    char string[501];
    scanf("%500s", string);
    int i;
    i = 0;
    while (string [i] != '\0') {
        i ++;
        if (i == 500) {
            break;
        }

    }
    printf("%.3d\n", i);
    printf("%s", string);
    return 0;
}

/* texto = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut porttitor augue lacinia
lorem blandit, nec aliquam justo rutrum. Suspendisse lacinia sapien eleifend eros
placerat." 

padrao = "lorems"*/