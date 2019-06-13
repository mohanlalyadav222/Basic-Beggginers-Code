/*copy input to output*/
#include<stdio.h>

void main(void){
  int c;
     c=getchar();
     while(!EOF)
    {	     putchar(c);
             c=getchar();
     }
}

