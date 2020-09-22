//Number of Digits in a number. And sum of all Digits.

#include <stdio.h>
int main(){
  int i=0,count=0,n=0,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  i = n;

  while(i!=0){
    count++;
    i=i/10;
  }
  printf("Number of Digits:%d \n",count);

  return 0;
}