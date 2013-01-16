#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    Coordonnees point;
    Coordonnees *pointeurpoint = NULL;
    initialiserCoordonnees (&point); //Coordonnees point = {0, 0};
    point.x = 1;
    point.y = 20;
    printf("Les coordonnees du point sont (%d; %d)\n", point.x, point.y);

    Personne joueur[2];

    int i;
    for(i = 0; i<2; i++)
    {
        printf("\n\nJoueur %d, quel est votre nom ?\n ", i+1);
        scanf("%s", joueur[i].nom);
        printf("\nVotre prenom ?\n ");
        scanf("%s", joueur[i].prenom);
    }

    for(i = 0; i<2; i++)
    {
        printf("\n \n Le joueur %d s'appelle %s %s", i+1, joueur[i].prenom, joueur[i].nom);
    }

    return 0;
}

void initialiserCoordonnees (Coordonnees* point)
{
    (*point).x = 0;
    point->y = 0; //Deux méthodes différentes, mais qui font la même chose.
}
