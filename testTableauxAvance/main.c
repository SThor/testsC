#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int main()
{
    int tableau [4] = {1, 83, 51, 0};
    int tableaubis[4] ={0}, valeurMax = 0;

    printf("Tableau 1 :\n");
    afficheTableau(tableau, 4);
    printf("\nSomme totale : %d\n", sommeTableau(tableau, 4));
    printf("\nMoyenne des valeurs du tableau : %f\n", moyenneTableau(tableau, 4));
    printf("\nTableau 2 :\n");
    afficheTableau(tableaubis, 4);
    printf("\nCopie ...\n");
    copie(tableau, tableaubis, 4);
    printf("\nTableau 2 :\n");
    afficheTableau(tableaubis, 4);
    printf("Valeur maximum du tableau 2 ?");
    scanf("%d", &valeurMax);
    printf("Limitation du tableau ...");
    maximumTableau(tableaubis, 4, valeurMax);
    printf("\nTableau 2 :\n");
    afficheTableau(tableaubis, 4);
    printf("\nTri ordonne du tableau 1 :\n");
    ordonnerTableau(tableau, 4);
    printf("Tableau 1 :\n");
    afficheTableau(tableau, 4);


    return 0;
}

