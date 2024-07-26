#include <stdio.h>
int mmain (){
  // increament operater
  // ++i (per increament)
  // i++ (post increament)

  int i=1;
  printf("%d \n", i++); //use, then increase the value
  printf("%d \n", i);

  printf("%d\n", ++i); //increase the value, then use
  printf("%d\n", i);
  return 0;

  // output-
  // 1
  // 2

  // 2
  // 2


}