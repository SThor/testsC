void afficheTableau(int tableau[], int tailleTableau)
{
    int i;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0, i;
    for(i = 0 ; i < tailleTableau ; i++)
    {
        somme = somme + tableau[i];
    }
    return somme / tailleTableau;

}
