# include <stdio.h>
# include <stdlib.h>
/*# define MAX0 3*/

int main() {
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