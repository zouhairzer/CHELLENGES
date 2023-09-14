#include <stdio.h>
#include <stdlib.h>

int main(){

    float R, r;
    printf("Enter nomber R:");
    scanf("%f", &R);

    printf("Enter nomber r :");
    scanf("%f", &r);
    float circonference = 2 * r * R;
    printf("la circonference d'un cercle est : %f", circonference);
    return 0;
}
