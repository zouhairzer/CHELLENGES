#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1;
    float x2, y2;
    printf("Entree les cordonnés de premier point :");
    scanf("%f %f", &x1 ,&y1);

    printf("Entree les cordonnés de deuxieme point :");
    scanf("%f %f", &x2 , &y2);

    double distance = sqrt(pow(x2,x1-2) + pow(y2, y2-2));
    printf("Reponse;%f" ,distance);

    return 0;
}
