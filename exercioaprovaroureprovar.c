#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Para usar acentos
    setlocale(LC_ALL, "");

    float nota1,nota2,nota3, media;
    printf("Digite suas 3 notas: ");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("Sua media foi de %.1f", media);
    if(media > 7){
        printf("O aluno foi aprovado!");
    }else{
        printf("O aluno foi reprovado");
    }
}
