#include<stdio.h>

int main(){
  int i=0,n=0;
  printf("Enter value of n for first n Natural Numbers: ");
  scanf("%d",&n);

  //printf("First %d integers: ",n);
  // for(int i=1; i<=n;i++)
  //   printf("%d ",i);
  
  // while(i !=n){
  //   printf("%d ",i+1);
  //   i++;
  // }

  printf("First %d integers in reverse: ",n);
  for(i=n;i>0;i--)
    printf("%d ",i);


  return 0;
}