#include <stdio.h>

int main(){

  int split[2] = {0};
  int unitDigit[5] = {0,2,4,6,8};
  
  int num = 0;
  printf("Enter the Number: ");
  scanf("%d",&num);

  split[0] = num/10;
  split[1] = num - (split[0] * 10);

  printf("Splitted Numbers:%d | %d\n\n",split[0],split[1]);
  
  
  if( split[1] == unitDigit[0] || split[1] == unitDigit[1] || split[1] == unitDigit[2] ||split[1] == unitDigit[3] || split[1] == unitDigit[4] )
    printf("%d is Even Number\n",num);
  else
    printf("%d is a odd Number\n",num);
  
  return 0;
}