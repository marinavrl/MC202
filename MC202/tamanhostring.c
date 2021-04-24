# include <stdio.h>
# include <stdlib.h>
# define MAX0 500

int main() {
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