/* Enter your solutions in this file */
#include<stdio.h>

int main(void){

  /*finding average*/

  float average(int len,int arr[]) {

   float sum = 0;
   float average;

   for (int c = 0; c<len; c++){

   sum+=arr[c];

   }

   return sum/length;

  }

  

  /*finding maximum*/

  int maximum(int len,int arr[]){

   int max_so_far;

  max_so_far = arr[0];

  for (int k=0; k<len; k++){

   if(marks[k] > max_so_far){

   max_so_far = marks[k];

   }

   }

   return max_so_far;

  }

  

  /*finding minimum*/

  int minimum(int length,int arr[]){

   int min_so_far;

  min_so_far = arr[0];

  for (int j=0; j<len; j++){

   if(marks[j] < min_so_far){

   min_so_far = marks[j];

   }

   }

   return min_so_far;

  }
/* mode function*/
int mode(int arr[], int len){
  
  int ar2[len];
  
  int l,c, max;
  
  int cnt = 0;
  
  for(int i = 0; i< len; i++){
    
  l = arr[i];
  for(int j=0; j<len; j++){
  if( arr[j] == l)
  cnt = cnt +1;
  }
    
  ar2[i] = cnt;
  cnt = 0;
  }
  
  max = ar2[0];
  for(int m = 0; m< len; m++){
  if(ar2[m]> max){
  max = ar2[m];
  }
    
  }
  for(f =0; f<len; f++){
  if(max == ar2[f])
  break;
  }
  
  return arr[f];
  }
  
/*factors function*/
  
int factors(int num, int arr[]){
int cpy = num;
int cnt = 0;
int cnt1 =0;
for(int i = 2; i<num/2; i++){
if(num%i ==0){
for(int j=2; j<=i; j++){
if(i%j==0)
cnt+= 1;
}
  
if(cnt ==1){
while(cpy%i ==0){
arr[cnt1] = i;
cpy/= i;
cnt1+= 1;
}
  
cpy = num;}
cnt = 0;
}
else
continue;}
return cnt1;
}
