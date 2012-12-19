#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[100];
    printf("Entrez votre nom :\n");
    scanf("%s", nom); //pas de &, car nom est un tableau, donc un pointeur.
    printf("Votre nom est %s.\n", nom);
    return 0;
}
