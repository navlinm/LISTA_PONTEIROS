5.
Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas)
int main(void){
   float vet[5] = {1.1,2.2,3.3,4.4,5.5};
   float *f;
   int i;
   f = vet; recebe endereço de vet[0]
   printf("contador/valor/valor/endereco/endereco");
   for(i = 0 ; i <= 4 ; i++){
   printf("\ni = %d",i);
   printf("vet[%d] = %.1f",i, vet[i]);
   printf("*(f + %d) = %.1f",i, *(f+i));
   printf("&vet[%d] = %X",i, &vet[i]);
   printf("(f + %d) = %X",i, f+i);
   }
 }

Para i=0
  printf("\ni = %d",i); =0
   printf("vet[%d] = %.1f",i, vet[i]); =1.1
   printf("*(f + %d) = %.1f",i, *(f+i)); =1.1
   printf("&vet[%d] = %X",i, &vet[i]); = B2707B70
   printf("(f + %d) = %X",i, f+i); = B2707B70
   }

Para i=1
  printf("\ni = %d",i); =1
   printf("vet[%d] = %.1f",i, vet[i]); =2.2
   printf("*(f + %d) = %.1f",i, *(f+i)); =2.2
   printf("&vet[%d] = %X",i, &vet[i]); =B2707B74
   printf("(f + %d) = %X",i, f+i); =B2707B74   
   }

Para i=2
  printf("\ni = %d",i); =2
   printf("vet[%d] = %.1f",i, vet[i]); =3.3
   printf("*(f + %d) = %.1f",i, *(f+i)); =3.3
   printf("&vet[%d] = %X",i, &vet[i]); =B2707B78
   printf("(f + %d) = %X",i, f+i); =B2707B78

   }

Para i=3
  printf("\ni = %d",i); =3
   printf("vet[%d] = %.1f",i, vet[i]); =4.4
   printf("*(f + %d) = %.1f",i, *(f+i)); =4.4
   printf("&vet[%d] = %X",i, &vet[i]); =B2707B7C
   printf("(f + %d) = %X",i, f+i); =B2707B7C

   }

Para i=4
  printf("\ni = %d",i); =4
   printf("vet[%d] = %.1f",i, vet[i]); =5.5
   printf("*(f + %d) = %.1f",i, *(f+i)); =1.1
   printf("&vet[%d] = %X",i, &vet[i]); =B2707B80
   printf("(f + %d) = %X",i, f+i); =B2707B80
   }
