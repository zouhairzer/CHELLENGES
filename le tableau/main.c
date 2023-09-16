#include <stdio.h>
#include <stdlib.h>

int nums [3][2] = {

    {1,2},
    {3,4},
    {5,6}
};


int main () {
    nums [3][2];
    int i , j ;
    for (i=0 ; j<3 ; i++){

        for (j=0 ; j<2 ; j++){
            printf("%d,", nums[i][j]);}
        printf("\n");
        }
    }







