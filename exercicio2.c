#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 2 notas e mostre o valor absoluto entre elas.

    float nota1, nota2, resultado;
    printf("Digite sua primeira nota: ");

    // scanf = Faz a leitura da entrada do valor
    // & = Faz o link com a string

    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    // abs = Mostra valor absoluto exemplo: se for -4 ele deixa 4.

    resultado = abs(nota1 - nota2);

    printf("O valor absoluto é %f", resultado);

}
