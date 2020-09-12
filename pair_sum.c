// Question is to find pairs of numbers whose sum is equal to the specified value, here sum = 13.

#include <stdio.h>
int main(){
  int a[] = {1,3,4,5,6,7};
  int n = sizeof(a) / sizeof(int);
  int count =0;
  int sum =13;
  int addition = 0;
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++){
      addition = a[i] + a[j];
      if(addition == sum){
        printf("pair: (%d,%d)\n",a[i], a[j]);
        count++;
      }
    }
  }

  if(count == 0){
    printf("No Pair exist\n");
  }

  
  
  return 0;
}