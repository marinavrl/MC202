//Texto vem na forma de um vetores de caracteres
//Strings em C (slides)
//código com tamanho da string
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define MAX0 500
# define MAX1 30

/*size_t strlen(const char *s);*/

void imprime_trecho(char texto[], int ini, int tam) {
    int j;
    printf ("%d: ", ini ) ;
    for (j = 0; j < tam ; j ++)
        printf ("%c", texto [ini + j]) ;
    printf ("\n") ;
}

int tamanho (char string []) {
    int i;
    i = 0;
    while (string [i] != '\0') {
        i ++;
    }
    return i;
}

int ocorre(char texto[], int pos, char padrao[]) {
    int j;
    j = 0;
    while (padrao[j] != '\0') {
        j ++;
        if ( texto[pos+j] == '\0' ||
            ( texto[pos+j] != padrao[j] && padrao[j] != ' '))
            return 0;
    }
    return 1;
}

int main () {
    int i;
    char texto [MAX0] , padrao [MAX1];
    scanf("%s ", padrao);
    fgets(texto, MAX0, stdin);
    printf ("Procurando por %s no texto : %s\n", padrao, texto );
    i = 0;
    while (texto[i] != '\0') {
        i ++;
        if ( ocorre ( texto , i , padrao ))
            imprime_trecho ( texto , i , tamanho ( padrao ));
        else
            printf("Nenhuma ocorrencia encontrada\n");
        break;
    }
    return 0;
}

/*Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut porttitor augue lacinia lorem blandit, nec aliquam justo rutrum. Suspendisse lacinia sapien eleifend erosplacerat.
lorems*/

/*001 085 090 lorem */
/*Nenhuma ocorrencia encontrada*/