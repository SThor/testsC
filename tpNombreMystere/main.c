#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 999, valeurJoueur = 999, nbTentatives = 0, choixMenu = 0, joueurCon = 0, continuer = 0, erreurNombre = 0, jouer = 1;
    srand(time(NULL));
    int nombreMin = 0, nombreMax = 100;

    printf("== Nombre Mystere ==\n");

    do
    {
        do
        {
            printf("\nMenu :\n");
            printf("1. Deux joueurs\n");
            printf("2. Solo\n");
            printf("3. Changer la difficulte\n");
            scanf("%d", &choixMenu);
            switch(choixMenu)
            {
            case 1: //MODE DEUX JOUEURS
                do
                {
                    jouer = 1; //On entre en mode de jeu.
                    printf("\nPremier joueur, choisis le nombre a faire deviner, entre %d et %d :", nombreMin, nombreMax);
                    scanf("%d", &nombreMystere);
                    if(nombreMystere > nombreMax || nombreMystere < nombreMin)
                    {
                        printf("\nMerci de recommencer, avec une valeur adaptee.");
                        erreurNombre = 1;
                    }
                    else
                    {
                        erreurNombre = 0;
                    }
                }while(erreurNombre == 1);
                printf("\nDeuxieme joueur,");
                break;
            case 2: //MODE UN JOUEUR
                jouer = 1; //On entre en mode de jeu.
                printf("Generation du nombre aleatoire ...");
                //Génération du nombre aléatoire
                nombreMystere = (rand()% (nombreMax-nombreMin+1))+nombreMin;
                //printf("%d\n", nombreMystere);
                break;
            case 3: //CHANGEMENT DE LA DIFFICULTE
                jouer = 0; //On n'entre PAS en mode de jeu.
                printf("Entrez le nombre minimum :");
                scanf("%d", &nombreMin);
                printf("Entrez le nombre maximum :");
                scanf("%d", &nombreMax);
                break;
            default :
                printf("Merci de choisir une des deux options indiquees, en tapant le numero correspondant.");
                joueurCon = 1;
            }
        }while(joueurCon == 1);

        if(jouer == 1)
        {
             do
            {
                printf("\nTente de deviner le nombre mystere, entre %d et %d :", nombreMin, nombreMax);
                scanf("%d", &valeurJoueur);
                if(valeurJoueur < nombreMystere)
                {
                    nbTentatives++;
                    printf("C'est plus.");
                }
                else if(valeurJoueur > nombreMystere)
                {
                    nbTentatives++;
                    printf("C'est moins.");
                }
                else
                {
                    printf("Bravo, tu as trouve le nombre en %d coups !\n", nbTentatives);
                    printf("Si tu veux faire une nouvelle partie, tape 1.");
                    scanf("%d", &continuer);
                }
            }while(valeurJoueur != nombreMystere);
        }
        else
        {
            continuer = 1;
        }

    }while(continuer == 1);

    return 0;
}
