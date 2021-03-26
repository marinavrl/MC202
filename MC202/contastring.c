//tamanho da string é o número de caracteres antes do ’\0’
1 int tamanho ( char string []) {
2 int i;
3 for (i = 0; string [ i] != '\0 '; i ++) ;
4 return i;
5 }