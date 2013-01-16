#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fichier = NULL;
    fichier = fopen("fichier.txt", "r+");
    char nom[100];
    int caractereActuel = 0;

    if (fichier != NULL)
    {
        /*fputc('A', fichier);
        fputs("\nJe mange des scoobidoos.", fichier);
        printf("Merci d'entrer votre prenom.");
        scanf("%s", nom);
        fprintf(fichier, "\nL'utilisateur s'appelle %s", nom);*/
        do
        {
            caractereActuel = fgetc(fichier);
            printf("%c", caractereActuel);
        } while (caractereActuel != EOF);

    }
    else
    {
        printf("Le fichier n'a pas pu être ouvert.");
    }

    fclose(fichier);
    return 0;
}
