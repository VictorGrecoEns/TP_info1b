#include <stdio.h>

int pascal(int,int);

void main(){
    int nombre;
    printf("Quel est le nombre de ligne à afficher ?");
    scanf("%i", &nombre);
    for (int i=0; i<nombre; i++){
        for (int j=0; j<i; j++){
            printf(" %i",pascal(i,j));
        }
        printf(" 1\n");
    }

}

int pascal(int i, int j){

    if (i==0){
        return 1;
    } else if (j == 0){
        return 1;
    } else if (i == j){
        return 1;
    }else 
    return pascal(i-1,j)+pascal(i-1, j-1);
}
