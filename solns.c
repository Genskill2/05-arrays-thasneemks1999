/* Enter your solutions in this file */
#include<stdio.h>


float calculate_average(int length,int marks[]);

int maximum(int length,int marks[]);

int main(void){

  int n;

  int marks[n];

  for (int i=0;i<n;i++){

  float average = calculate_average(n,marks); 

  int max = maximum(n,marks);

   int min = minimum(n,marks);

   

  printf("average mark are : %.2f\n maximum mark are : %i\n minimum mark are : %i\n",average,max,min);

  

  }

  

  /*finding average*/

  float calculate_average(int length,int marks[]) {

   float sum;

   for (int i = 0; i<length; i++){

   sum+=marks[i];

   }

   return sum/length;

  }

  

  /*finding maximum*/

  int maximum(int length,int marks[]){

   int max_so_far;

  max_so_far = marks[0];

  for (int i=0; i<length; i++){

   if(marks[i] > max_so_far){

   max_so_far = marks[i];

   }

   }

   return max_so_far;

  }

  

  /*finding minimum*/

  int minimum(int length,int marks[]){

   int min_so_far;

  min_so_far = marks[0];

  for (int i=0; i<length; i--){

   if(marks[i] < min_so_far){

   min_so_far = marks[i];

   }

   }

   return min_so_far;

  }

