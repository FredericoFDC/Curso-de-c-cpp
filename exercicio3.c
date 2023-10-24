#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    // Crie um algoritimo que leia 3 números de uma so vez
    // Coloque o resultado da multiplicação entre os 3 em uma variavel própria.
    // Depois exiba essa variável.

    float v1, v2, v3, resultado;
    printf("Digite três números:");

    // scanf = Faz a leitura da entrada do valor
    // & = Faz o link com a string

    scanf("%f %f %f ", &v1, &v2, &v3);

    resultado = v1 * v2 * v3;

    printf("A multiplicação entre os valores é: %f", resultado);

}
