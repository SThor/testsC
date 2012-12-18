#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int variableInutile = 0, variableUtilisateur = 0;
    const int VARIABLE_FIXEE = 10;
    printf("Hello world!\n");
    variableInutile = 5;
    printf("la valeur de variableInutile est %d\n Entre un nombre.", variableInutile);
    scanf("%d", &variableUtilisateur);
    printf("ok. Voila :%d", variableUtilisateur);
    return 0;
}
