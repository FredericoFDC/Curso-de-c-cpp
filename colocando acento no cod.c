#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Imprimir ola na tela
    printf("Ol� \n");

    //Lendo valor inteiro
    int a = 500;
    printf("%d \n", a); // % = N�meros inteiros recebem
    printf("O valor de a � = %d \n", a);

    // Scanear o valor inteiro
    scanf("Digite um novo valor para a: %d", &a);

    printf("%d", a);

    // Lendo valor quebrado
    float b = 5.5;
    printf("%f \n", b); // % = N�meros inteiros recebem
    printf("O valor de b � = %f \n", b);

    // Scanear o valor inteiro
    scanf("%f", &b);

    printf("O valor de b mudou para %f", b);

    // Lendo letras
    char letra = 'f';
    printf("%c \n", letra); // % = N�meros inteiros recebem
    printf("O valor de c � = %c \n", letra);
    fflush(stdin);
    // Scanear o valor inteiro
    scanf("%c", &letra);

    printf("O valor de c mudou para %c",letra);
}
