#include<stdio.h>
#include<math.h>
//switch statement
int main() {
  int day; // 1-mon; 2-tue; 3-wed;
  printf("enter day(1-7) :");
  scanf("%d", &day);

switch (day){
case 1: printf("monday\n");
  break;
case 2: printf("tuesday\n");
  break;
case 3: printf("wedneday\n");
  break;
case 4: printf("thurday\n");
  break;
case 5: printf("friday\n");
  break;
case 6: printf("saturday\n");
  break;
case 7: printf("sunday\n");
  break;

    default:
      printf("not a valid day \n");
}
//after the commentout all break output is all the print of statement
  return 0;
}
// #include<stdio.h>
// #include<math.h>
// int main(){
//   int number;
//   printf("enter number : ");
//   scanf("%d", &number);

//   if (number >= 0)
//   {
//     printf("positive \n");
//     if (number % 2 == 0)
//     {
//       printf("even \n");
//     }
//     else{
//       printf("odd \n");
//     }
    
//   }
  
//   else {
//     printf("negitive \n"); 
//   }
//   return 0;
// }