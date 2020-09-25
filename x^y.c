#include <stdio.h>
int main(){
  int x=0,y=0;
  int result=1;
  printf("Enter 2 numbers x and y, such that x^y\n");
  scanf("%d%d",&x,&y);

  for(int i=0; i<y; i++){
    result = result * x;
  }
  printf("%d^%d is: %d", x,y,result);


  return 0;
}