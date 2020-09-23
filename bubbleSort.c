//bubble sort and modified bubble sort: use of flag variable
#include <stdio.h>
int main(){

  int arr[10] = {0};
	int n=0;
  int flag;
	printf("Enter number of Elements: ");
	scanf("%d",&n);
	//printf("n: %d",n);
	
	printf("Enter Elements of Array: ");
	for(int i=0; i<n; i++){
	    scanf("%d",&arr[i]);
	}
	
	printf("Entered Elements: ");
	for(int i=0; i<n; i++){
	    printf("%d ",arr[i]);
  } 
  printf("\n");  
  int x = n;
  int temp=0;
  //2,4,9,3,6
  while(x!=0){
    flag = 0;
    for(int i=0; i<x-1;i++){
    if(arr[i] > arr[i+1]){
      flag=1;
      temp = arr[i];
      arr[i]= arr[i+1];
      arr[i+1] = temp;
      }
      
    }
    if(flag==0)
      break;
    x--;
  }
  printf("Sorted Elements: ");
  for(int i=0; i<n;i++)
    printf("%d ",arr[i]);
  

  return 0;
}