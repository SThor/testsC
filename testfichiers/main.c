#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fichier = NULL;
    fichier = fopen("fichier.txt", "w+");
    char nom[100] = "";
    int caractereActuel = 0;
    char nom_fichier[100] = "";

    if (fichier != NULL)
    {
        fputc('A', fichier);
        fputs("\nJe mange des scoobidoos.", fichier);
        printf("Merci d'entrer votre prenom.");
        scanf("%s", nom);
        fprintf(fichier, "\nL'utilisateur s'appelle %s", nom);
        rewind(fichier);
        while (caractereActuel != EOF)
        {
            caractereActuel = fgetc(fichier);
            printf("%c", caractereActuel);
        }

        fclose(fichier);
        printf("Merci d'entrer le nom de votre fichier.");
        scanf("%s", nom_fichier);
        rename("fichier.txt", nom_fichier);

    }
    else
    {
        printf("Le fichier n'a pas pu être ouvert.");
    }
    return 0;
}
