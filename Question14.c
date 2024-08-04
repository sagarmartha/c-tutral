//print the number from 0 to n, if in given by user  n = 4

#include <stdio.h>

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d, &n");


  // using while loop
  // int i = 0;
  // while (i<=n)
  // {
  //   printf("%d \n, i");
  //   i++;

  // }

  // using for loop
  for (size_t i = 0; i < =n; i++)
  {
    printf("%d \n ", i);
  }
  
  return 0;
}
