#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x,x1 ,x2;
    printf("Entre la valeur de a , b et c : \n ");
    scanf("%f%f%f", &a, &b , &c);

    delta = pow(b,2) - (4*a*c);

    if (delta<0)

    printf("pas de solution");

     else if (delta==0){

     x = (-b)/(2*a);
     printf("la solution est  : %.2f",x);

    } else {

     x1 = (- b - sqrt(delta))/(2*a);
     x1 = (- b + sqrt(delta))/(2*a);
     printf("les solutions sont : %2.f est", x1, x2);


    }

    return 0;
}
