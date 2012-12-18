#include <stdio.h>
#include <stdlib.h>

int main()
{
    int continuer = 0;
    do
    {
        int premierNombre = 0, deuxiemeNombre = 0, resultat = 0, reste = 0;
        printf("Division avec reste : premier nombre ?");
        scanf("%d", &premierNombre);
        printf("\nDeuxieme nombre ?");
        scanf("%d", &deuxiemeNombre);
        if (deuxiemeNombre != 0)
        {
            resultat = premierNombre/deuxiemeNombre;
            reste = premierNombre%deuxiemeNombre;
            printf("\nQuand on divise %d par %d, il y va %d fois, reste %d \n", premierNombre, deuxiemeNombre, resultat, reste);
        }
        else
        {
            printf("Desole, les divisions par 0 sont trop difficiles. :( \n");
        }
        printf("Si vous souhaitez faire une autre division, tapez 1.");
        scanf("%d", &continuer);
        printf("\n\n");
    }while (continuer == 1);
    return 0;
}
