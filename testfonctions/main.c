#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double carre(double nombre)
{
    return pow(nombre, 2.0);
}
int main()
{
    double nombre = 0.0;
    scanf("%lf", &nombre);
    printf("Le carre de %f est %f", nombre, carre(nombre));
    return 0;
}
