#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL,"");

    int a = 3;
    char b ='x';

    if (a == 1){
        printf("\n Op��o escolhida: 1");
    }else if (a == 2){
        printf("\n Op��o escolhida: 2");
    }else if (a == 3){
        printf("\n Op��o escolhida: 3");
    }else{
        printf("\n Op��o invalida");
    }

    switch(a){
    case 1:
        printf("\n Op��o escolhida: 1");
        break;
    case 2:
        printf("\n Op��o escolhida: 2");
        break;
    case 3:
        printf("\n Op��o escolhida: 3");
        break;
    default:
        printf("\n Op��o invalida");
        break;
    }
    system("pause");
}
