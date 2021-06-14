/* Enter your solutions in this file */
#include<stdio.h>

/*average function*/
float average(int arr[], int len){
  
  int sum = 0;
  
  float avg;
  for(int c=0; c<len; c++){
    sum = sum + arr[c];
  }
  avg = (float)sum/len;
  return avg;
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

/* max function*/
int max(int arr[], int len){
  int maximum = arr[0];
  for(int i= 0; i< len; i++){
    if(arr[i]> maximum)
      maximum = arr[i];
  }
  return maximum;
       }

/* min function*/
     int min( int arr[], int len){
  int min;
  min = arr[0];
  for(int k=0; k<len; k++){
    if(arr[k]<min){
      min = arr[k];
    }
  }
  return min;
}

/* mode function*/
int mode(int arr[], int len){
  int arr2[len];
  int l,c, max;
  int cnt = 0;
  for(int i = 0; i< len; i++){
  l = arr[i];
  for(int j=0; j<len; j++){
  if( arr[j] == l)
  cnt = cnt +1;
  }
  arr2[i] = cnt;
  cnt = 0;
  }
  max = arr2[0];
  for(int i = 0; i< len; i++){
  if(arr2[i]> max){
  max = arr2[h];
  }
  }
  for(c =0; c<len; c++){
  if(max == ar2[c])
  break;
  }
  return arr[c];
  }
