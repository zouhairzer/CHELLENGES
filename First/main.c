#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Nom[20];
    char prenom[20];
    char Sex[20];
    int  Age;
    int  Numero;
    printf("Enter your Nom:\n");
    scanf("%s", &Nom);
    printf("Enter your prenom:\n");
    scanf("%s", &prenom);
    printf("Enter your Sex:\n");
    scanf("%s", &Sex);
    printf("Enter your Age:\n");
    scanf("%d", &Age);
    printf("Enter your Numero de telephon:\n");
    scanf("%d", &Numero);

    return 0;
}
