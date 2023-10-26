#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    bool a = true, b = false;

    if(a){
        printf("A eh verdadeiro");
    }
    // Se a variavel b for false
       //Comparando o B
   if(b){
     printf("\nB eh verdadeiro");
   }
   else{
     printf("\nB eh falso");
   }

   //Comprando uma falsidade
   if(!b){
     printf("\nB eh falso");
   }

}
