#include <stdio.h>

int main(){

  int a = 10;
  int b = 20;
  //int temp =0;

  
  printf("Earlier values: a= %d, b= %d\n",a,b);
  
  // temp = a; Swapping of 2 numbers using temp variable.
  // a = b;
  // b = temp;
  
  a = a+b;  //swapping without using any 3rd variable.
  b = a-b;
  a = a-b;

  printf("Swapped values: a= %d, b= %d\n",a,b);

  return 0;
}