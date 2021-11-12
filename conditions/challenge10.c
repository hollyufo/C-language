#include<stdio.h>
int main() {
   printf("enter water temperture : ");
   int x;
   scanf("%d",&x);
   if(x < 0){
      printf("l'eau est glace\n");
   }
   else if(x > 0 && x < 100){
      printf("l'eau est liquide\n");
   }
   else{
      printf("l'eau c'est vapeur\n");
   }
}