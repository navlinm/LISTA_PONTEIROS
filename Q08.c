8.
O que fazem os seguintes programas em C? 
int main(){
   int vet[] = {4,9,13};
   int i;
   for(i=0; i<3;i++){
   printf("%d ",*(vet+i));
   }
 }
Para cada i o programa apresenta o valor de vet que condiz com ele, i=0 o valor apresentado será 4, i=1 apresentará 9 e i=2 irá aparecer 13.

int main(){
   int vet[] = {4,9,13};
   int i;
   for(i=0; i<3;i++){
   printf("%X ",vet+i); 
   }
 }
Para cada i o programa apresentará a localização do vet que condiz com ele.
