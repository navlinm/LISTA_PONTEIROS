12.
O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso.

O ponteiro serve principalmente para definir a função que será executada sem precisar escrever a função, pois ele pode mostrar qual a localização da função ou o que ela contem.

#include <stdio.h>

int main(){
    int x=1;
    int *p;
    p = &x;
    printf("%X ",&x); 
    printf("%d ",*p);
}
