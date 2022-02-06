#include<stdio.h>
//
 int main(){
     
   char name[20]="sarthak jindal";
   printf("my name is %s\n",name);
   
   name[5]='i';
   printf("my name is %s\n",name);

   char food[] ="tomato";
   printf("the best food is %s\n",food);

   strcpy(food,"mulli");
   printf("the best food is %s\n",food);
    return(0); 
 }
//



