#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
   float da,db;
   float pi = 6.141596;
   char halfpie[40];
   sprintf(halfpie, "%f", pi);


   
   char b = halfpie[5];

   char a[10] = b;

   da = atof(a);

   printf("Here is the result:\n %.0f \n",da + 2);
  
}