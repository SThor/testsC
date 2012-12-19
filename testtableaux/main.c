#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int tableau[4] = {0}, i = 0; //initialisation propre du tableau, mais à 0 seulement

    /*tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    for (i = 0 ; i < 4 ; i++) //initialisation du tableau avec une boucle
    {
        tableau[i] = 0;
    }*/
    for (i = 0 ; i < 4 ; i++) //lecture du tableau
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
