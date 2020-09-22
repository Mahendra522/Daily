#include <stdio.h>
#define max 50
int main(){
  int n,count = 2,arr[max] = {0};

  printf("Enter the number of items in fabonacci series: ");
  scanf("%d",&n);

  
  if(n>1){
    int i=0;
    arr[0] = 1;
    arr[1] = 1;
    while(count!=n){
      arr[i+2] = arr[i] + arr[i+1];
      i++;
      count++;
    }

    printf("%d numbers of the fabonacci series are: ",n);

    for(int i=0; i<n; i++)
      printf("%d ",arr[i]);

    printf("\n");
  }

  else{
    printf("Number of Elements must be greater then 1 !!!\n");
  }
 
  return 0;
}