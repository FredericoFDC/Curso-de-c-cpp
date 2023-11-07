#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    int ladoA, ladoB, ladoC;
    printf("Digite 3 valores:");
    scanf("%d \n %d \n %d \n", &ladoA, &ladoB, &ladoC);

    if(ladoA == ladoB && ladoC){
        printf("Esses valores são iguais");
    }
    else{
        printf("Estes valores são diferentes");
    }
}
