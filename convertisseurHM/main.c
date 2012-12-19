#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *pointeurheures, int *pointeurminutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 0;
    printf("Entre le nombre de minutes");
    scanf("%d", &minutes);
    decoupeMinutes(&heures, &minutes);
    printf("\n%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int *pointeurheures, int *pointeurminutes)
{
    *pointeurheures = *pointeurminutes / 60;
    *pointeurminutes = *pointeurminutes % 60;
}
