#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 999, valeurJoueur = 999, nbTentatives = 0;
    srand(time(NULL));
    const int MIN = 0, MAX = 100;
    nombreMystere = (rand()% (MAX-MIN+1))+MIN;
    //printf("%d\n", nombreMystere);
    printf("== Nombre Mystere ==\n");
    do
    {
        nbTentatives++;
        printf("Tente de deviner le nombre mystere :");
        scanf("%d", &valeurJoueur);
        if(valeurJoueur < nombreMystere)
        {
            printf("C'est plus.");
        }
        else if(valeurJoueur > nombreMystere)
        {
            printf("C'est moins.");
        }
        else
        {
            printf("Bravo, tu as trouve le nombre en %d coups !\n", nbTentatives);
        }
    }while(valeurJoueur != nombreMystere);

    return 0;
}
