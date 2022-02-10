/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   char sum,avg;
   
   printf("Enter Mark01:");
   scanf("%d", &mark1);
   
   printf("Enter Mark02:");
   scanf("%d", &mark2);
   
   //calculate
       sum=mark1+mark2;
       avg=sum/2;
   //print the average
       printf("%c", &avg):
   
  
  return 0;
}

