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

int ocorre(char texto[], int pos, char padrao[])

/* imprimir um trecho do texto: */

void imprime_trecho(char texto[], int ini, int tam)

/* medir o tamanho de uma string: */

int tamanho(char string[])
/*int main() {
    char string[MAX0];
    scanf("%s", string);
    int i;
    i = 0;
    while (string [i] != '\0') {
        i ++;
    }
    printf("%.3d\n", i);
    return 0;
} 
*/