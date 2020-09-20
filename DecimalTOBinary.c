#include <stdio.h>

int main(){
  int num = 0;
  int binary[10] = {0};
  int count = 0;

  printf("Enter the Decimal Number: ");
  scanf("%d",&num);

  for(int i=0; num>0; i++){
    binary[i] = num % 2;
    num = num /2;
    count++;
  }

  printf("Decimal to Binary Conversion: ");
  if(num%2 == 0)
  {
    for(int i=count-1; i>=0; i--)
    {
      printf("%d ",binary[i]);
    }
  }
  else
  {
    for(int i=0; i<count; i++)
    {
      printf("%d ",binary[i]);
    }
  }
  


  
  return 0;
}