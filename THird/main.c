#include <stdio.h>
#include <stdlib.h>

int main()
{
    float div;
    int perc, som, sub, mult ;
    int num1, num2;

    printf("Enter the first number:");
    scanf("%f", &num1);
    printf("Enter the second number:");
    scanf("%f", &num2);
    som = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    perc = num1 % num2;
    printf("Answer (+):%d   ", num1 + num2);
    printf("Answer (-):%d    ", num1 - num2);
    printf("Answer (*):%d    ", num1 * num2);
    printf("Answer (/):%f    ", num1 / num2);
    printf("Answer percentage :%d    ", num1 % num2);

    return 0;
}
