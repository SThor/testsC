#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 0;
    printf("Quel age as-tu ?\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Tu es majeur, tu peux continuer.");
    }
    else if (age >4)
    {
        printf("Tu es un enfant, cool pour toi.");
    }
    else
    {
        printf("Tu es tout petit, mais bon, continue quand meme.");
    }
    return 0;
}
