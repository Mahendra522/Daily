//Prime Numbers are divisible only by 1 and themselves e.g. 2, 3, 5, 7 etc.
#include <stdio.h>
int main(){
  int x=0,y=0;
  int num=2;
  int i=0;
  printf("Enter 2 numbers,to find all prime numbers in that range:");
  scanf("%d%d",&x,&y);
  
  while(num>=x && num<=y){
    i=2;
    while(i< num && num%i !=0){
      i++;
    }
    if(i%num == 0){
      printf("%d ",i);
    }
    num++;
  }


  return 0;
}