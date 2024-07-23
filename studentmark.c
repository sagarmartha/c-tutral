// write a program to check if 100 student passed or failed
// marks >30 is PASS
// marks <= 30 is FAIL

#include<stdio.h>
#include<math.h>
// Solve problem using if-else
 int main(){
   int marks;
   printf("enter number(0-100) : ");
   scanf("%d", &marks);

   if (marks <= 30)
   {
     printf("FAIL \n");
   }
   else
   {
     printf("PASS \n");
   }

   return 0;
  }