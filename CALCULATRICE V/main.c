#include <stdio.h>
#include <stdlib.h>

int Addition (int, int);
int Soustraction (int, int);
int Multiplication (int, int);
int Division (int, int) ;
int puissance (int, int );
int Racin (int , int );

void Menu(int a , int b){
    char op;
    printf("Addition      (+) : \n");
    printf("Soustraction  (-) : \n");
    printf("Multiplication(*) : \n");
    printf("Division      (/) : \n");
    printf("Racin         (R) : \n");
    printf("Puissance     (+) : \n");

    printf("Entrer le nombre A : ");
    scanf("%d", &a);
    printf("Entrer operateur : ");
    scanf("%s", &op);
    printf("Entrer le nombre B : ");
    scanf("%d", &b);


    switch(op){
    case '+':

        printf("resulta est %d",a+b);
        Addition(a,b);

        break;
    case '-':

        printf("resulta est %d",a-b);
        Soustraction(a,b);

        break;
    case '*':

        printf("resulta est %d",a*b);
        Multiplication(a,b);

        break;
    case '/':
        if(a != 0 && b != 0){

            printf("resulta est %d ",a/b);
            Division(a,b);
        }else {printf("\n EREUR");}

        break;
    case 'R':

        printf("resulta est %d",a/2);
        Racin(a,b);

        break;
    case '^':

        printf("resulta est %d",a*a);
        puissance(a,b);

    break;
    default : printf("Invalid operation");
    break;
}

}
int Addition (int a, int b){
    return a+b;
}
int Soustraction (int a, int b){
    return a-b;
}
int Multiplication (int a, int b){
    return a*b;
}
int Division (int a, int b){
    return a/b;
}
int puissance (int a, int b){
    return a*a;
}
int Racin (int a, int b){
    return a/2;
}



int main(){
    int a,b;
    for(int i=0 ; i<7 ; i++ ){
        Menu(a,b);

    }



    return 0;
}
