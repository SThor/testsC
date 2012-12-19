#include <stdio.h>
#include <stdlib.h>

double convertirEnFrancs(double euros)
{
    return 6.55957 * euros;
}

double convertirEnEuros(double francs)
{
    return francs / 6.55957;
}

int main()
{
    printf("10 euros = %fF\n", convertirEnFrancs(10));
    printf("50 euros = %fF\n", convertirEnFrancs(50));
    printf("100 euros = %fF\n", convertirEnFrancs(100));
    printf("200 euros = %fF\n", convertirEnFrancs(200));

    printf("10 francs = %fE\n", convertirEnEuros(10));
    printf("50 francs = %fE\n", convertirEnEuros(50));
    printf("100 francs = %fE\n", convertirEnEuros(100));
    printf("200 francs = %fE\n", convertirEnEuros(200));
    return 0;
}
