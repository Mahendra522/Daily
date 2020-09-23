#include <stdio.h>
int main(){
  int temp;
  for(int i=0; i<10; i++){
    if(i == 6){
      continue;
    }
    if(i>6){
      printf("%d ",temp);
    }
  }
  temp=12; 
  return 0;
}