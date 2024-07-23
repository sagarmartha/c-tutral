// write a program to give grandes to  student
// mark < 30 is c 
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+
#include <stdio.h>
#include <math.h>
int main(){
  int marks;
  printf("enter number (0-100)" );
  scanf("%d", &marks);

  if (marks >=30 )
  {
    printf("C \n");
  }
  else if (marks >=30 && marks < 70)
  {
    printf("B \n");
  }
  else if (marks >= 70 && marks < 90)
  {
    printf("A \n");
  }
  else
  {
    printf("A+");
  }
  
  
  return 0;
}
