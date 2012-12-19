#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable = 10;
    int *pointeurSurVariable = &variable;
    printf("La valeur de la variable est %d, et son adresse est %d", variable, &variable);
    printf("\nLa valeur du pointeur sur la variable est %d, et il lit la valeur de l'adresse ou il pointe : %d", pointeurSurVariable, *pointeurSurVariable);


    return 0;
}
