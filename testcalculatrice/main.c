#include <stdio.h>
#include <stdlib.h>

int main()
{
    int premierNombre = 0, deuxiemeNombre = 0, resultat = 0, reste = 0;
    printf("Division avec reste : premier nombre ?");
    scanf("%d", &premierNombre);
    printf("\nDeuxieme nombre ?");
    scanf("%d", &deuxiemeNombre);
    resultat = premierNombre/deuxiemeNombre;
    reste = premierNombre%deuxiemeNombre;
    printf("\nQuand on divise %d par %d, il y va %d fois, reste %d", premierNombre, deuxiemeNombre, resultat, reste);
    return 0;
}
