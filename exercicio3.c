#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    // Crie um algoritimo que leia 3 n�meros de uma so vez
    // Coloque o resultado da multiplica��o entre os 3 em uma variavel pr�pria.
    // Depois exiba essa vari�vel.

    float v1, v2, v3, resultado;
    printf("Digite tr�s n�meros:");

    // scanf = Faz a leitura da entrada do valor
    // & = Faz o link com a string

    scanf("%f %f %f ", &v1, &v2, &v3);

    resultado = v1 * v2 * v3;

    printf("A multiplica��o entre os valores �: %f", resultado);

}
