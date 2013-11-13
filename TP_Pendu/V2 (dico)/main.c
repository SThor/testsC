#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char lireCaractere();

void afficherMot(int* motTrouve, char* motSecret );

int main()
{
    char maLettre = 0;
    char motSecret[] = "MARRON";
    int chances_restantes = 10;
    int jeu_termine = 0;
    int i = 0;
    int motTrouve [6]= {0};

    printf("Bienvenue dans ce jeu de Pendu. Choisissez une lettre, vous ne pouvez vous tromper que %d fois.\n", chances_restantes);

    while (!jeu_termine)
    {
        maLettre = lireCaractere();

        if(strchr(motSecret, maLettre) == NULL)
        {
            chances_restantes-- ;
            if (chances_restantes == 0)
            {
                jeu_termine = 1;
                printf("Vous avez perdu :( . Le mot a deviner etait %s\n", motSecret);
            }
            else
            {
                afficherMot(&motTrouve , &motSecret);
                printf("\nPas de chance ! La lettre n'y est pas. Il vous reste %d chances.\n \n Tentez une nouvelle lettre !\n", chances_restantes);

            }
        }
        else
        {
            for (i = 0; i<6; i++)
            {
                if (maLettre == motSecret[i])
                {
                    motTrouve[i] = 1;
                }
            }

            afficherMot(&motTrouve , &motSecret);

            jeu_termine = 1;
            for (i = 0; i < 6; i++)
            {
                if (motTrouve[i] == 0)
                {
                    jeu_termine = 0;
                }
            }
            if (jeu_termine == 0)
            {
                printf("\nBravo ! Continuez, le mot n'est pas fini !");
            }
            else
            {
                printf("\nBravo, vous avez trouve le mot complet !");
            }
        }
    }
    return 0;
}

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar(); //lecture du premier caractere
    caractere = toupper(caractere); //on force la casse haute

    while (getchar() != '\n'); //on vide le buffer en lisant tous les caracteres restants (sans les enregistrer)

    return caractere;
}

void afficherMot(int* motTrouve, char* motSecret )
{
    int i = 0;
    for (i = 0; i<6 ; i++)
    {
        if (motTrouve[i])
        {
            printf("%c", motSecret[i]);
        }
        else
        {
            printf("*");
        }
    }
}
