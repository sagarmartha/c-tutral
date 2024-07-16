#include<stdio.h>
#include<math.h>
int main() {
  int age;
  printf("enter age :");
  scanf("%d", &age);
  if (age > 18) 
  {
    printf("adult\n");
    printf("thry can vote");
  }
  else{
    printf("not addult \n");
  }
  

  return 0;
}