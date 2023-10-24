#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre a média entre elas.

    float nota1, nota2, resultado;
    printf("Digite sua primeira nota: ");

    // scanf = Faz a leitura da entrada do valor
    // & = Faz o link com a string

    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    resultado = (nota1 + nota2) / 2;

    printf("Sua média foi %f", resultado);



}
