#include <stdio.h>
int main(){

  int a,b,n=9;
  for(int i=1; i<=n/2+1; i++){

      a = (i*2)-1;
      b = (9-a)/2;
      for(int j=0; j<b; j++){
        printf(" ");
      }
      for(int j=0; j<a; j++){
        printf(".");
      }
      for(int j=0; j<b; j++){
        printf(" ");
      }
      
    printf("\n");
  }
    
      
  return 0;
}