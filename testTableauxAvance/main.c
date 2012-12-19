#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int main()
{
    int tableau [4] = {1, 51, 83};

    afficheTableau(tableau, 4);
    printf("\nSomme totale : %d\n", sommeTableau(tableau, 4));
    printf("\nMoyenne des valeurs du tableau : %f\n", moyenneTableau(tableau, 4));


    return 0;
}

