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

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
    int i;
    for(i = 0; i<tailleTableau; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax)
{
    int i;
    for(i = 0; i<tailleTableau; i++)
    {
        if(tableau[i]>valeurMax)
        {
            tableau[i] = 0;
        }
    }
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
    int i = 0, grand = 0, petit = 0, ordre = 0;
    do
    {
        i = 0;
        ordre = 1;
        do
        {

            if(tableau[i]>tableau [i+1])
            {
                grand = tableau[i];
                petit = tableau[i+1];
                tableau[i] = petit;
                tableau[i+1] = grand;
                ordre = 0;
            }
            else{}
            i++;
        }while(i<tailleTableau);
    }while(!ordre);
}
