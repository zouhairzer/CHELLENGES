#include <stdio.h>
#include <stdlib.h>

int main()
{
    float somme, moyen;
    float a,b,c;
    printf("Entree le numero :\n");
    scanf("%f", &a);
    printf("Entree les numero :\n");
    scanf("%f", &b);
    printf("Entree les numero :\n");
    scanf("%f", &c);
    somme = (a+b+c);
    moyen = somme/2;

    printf("Entre Reponse : %f \n", somme);
    printf("Entre Reponse : %f \n", moyen);

    return 0;
}
