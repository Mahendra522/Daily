//lcm of 2 numbers
#include<stdio.h>
int main(){
  int x=0,y=0;
  printf("Enter 2 numbers: ");
  scanf("%d%d",&x,&y);

  if(x>y){
    if(x%y == 0){
      printf("LCM is: %d",x);
    }
    else{
      int i=1;
      while(i){
        if((x*i)%y == 0){
          printf("LCM is %d",x*i);
          break;
        }
        i++;
      }
    }
  }
  else{
    if(y%x == 0){
      printf("LCM is: %d",y);
    }
    else{
      int i=1;
      while(i){
        if((y*i)%x == 0){
          printf("LCM is %d",y*i);
          break;
        }
        i++;
      }
    }
  }
  return 0;
}