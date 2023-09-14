#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempF, tempC;
    printf("Enter la tamperature en Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (tempF-32)/1.8;
    printf("la tamperature en degree Celecius est: %f ", tempC );

    if(tempC < 10){
        printf("froid");
    }else if (tempC > 40){
        printf("tres chaud");
    }else if (tempC < 0){
        printf("tres froid");
    }else if (tempC >20){
        printf("chaud");
    }


    return 0;
}
