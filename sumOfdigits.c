#include <stdio.h>

int main(){
  int x=0, n=0,sum=0,count=0;
  //int result[10]={0};
  printf("Enter a number: ");
  scanf("%d",&n);
  x = n;
  while(x!=0){
    count++;
    x=x/10;
  }
  printf("Total number of digits: %d\n",count);

  while(n!=0){
    sum = sum + n%10;
    n=n/10;
  }
  // for(int i=0;i<count;i++){
  //   result[i]=n%10;
  //   n=n/10;
  // }

  // for(int i=0;i<count;i++){
  //   sum = sum + result[i];
  // }
  printf("sum is: %d \n",sum);
  
  return 0;
}