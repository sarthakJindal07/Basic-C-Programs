#include<stdio.h>
#include "headerfile.c"

 int main(){
     char AGE, MYNAME;
     AGE= 20;
       
     int girlsAGE = (AGE / 2 + 7);
     printf("%s can date girls %d or older", girlsAGE);
 
    return(0); 
 }
