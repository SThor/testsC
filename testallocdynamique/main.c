#include <stdio.h>
#include <stdlib.h>

/*int main(int argc, char *argv[])
{
    int *memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int));
    if(memoireAllouee == NULL)
    {
        exit(0);
    }

    printf("Quel age avez vous ?");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee);
    return 0;
}*/

//===== DEUXIEME TEST =====//

int main(int argc, char *argv[])
{
    int nombreDAmis = 0, i = 0;
    int* ageAmis = NULL; // Ce pointeur va servir de tableau apr�s l'appel du malloc

    // On demande le nombre d'amis � l'utilisateur
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nombreDAmis);

    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la m�moire pour le tableau
        if (ageAmis == NULL) // On v�rifie si l'allocation a march� ou pas
        {
            exit(0); // On arr�te tout
        }

        // On demande l'�ge des amis un � un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les �ges stock�s un � un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On lib�re la m�moire allou�e avec malloc, on n'en a plus besoin
        free(ageAmis);
    }

    return 0;
}

