#include<stdio.h>
int main() {
   int mark;
   printf("enter your mark : ");
   scanf("%d",&mark);

   if(mark > 10 && mark < 12 ){
      printf("Passable\n");
   }
   else if(mark >= 12 && mark < 14){
      printf("Assez bien\n");
   }
   else if(mark >= 14 && mark < 16){
      printf("Bien\n");
   }
   else if(mark >= 16){
      printf("Trés bien\n");
   }
}