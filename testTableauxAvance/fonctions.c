#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

void afficheTableau(int tableau[], int tailleTableau)
{
    int i;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int i;
    double somme = 0.0;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    return somme / tailleTableau;

}
