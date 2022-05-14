10.
Implemente um programa de computador para testar estas suposições e compare as respostas oferecidas pelo programa com as respostas que você idealizou.

int main(){
  char x[4];
  int p;
  for(int i=0;i<4;i++){
  p = &x;
    printf("%X ",x+i); 
  }
}

#include <stdio.h>

int main(){
  int x[4];
  int p;
  for(int i=0;i<4;i++){
  p = &x;
    printf("%X ",x+i); 
  }
}

#include <stdio.h>

int main(){
  float x[4];
  int p;
  for(int i=0;i<4;i++){
  p = &x;
    printf("%X ",x+i); 
  }
}

#include <stdio.h>

int main(){
  double x[4];
  int p;
  for(int i=0;i<4;i++){
  p = &x;
    printf("%X ",x+i); 
  }
}
