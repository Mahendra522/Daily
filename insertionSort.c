#include <stdio.h>
int main(){
  int n=0,temp=0;
  int arr[10]={0};
  printf("Enter total count of number: ");
  scanf("%d",&n); //5
  
  printf("Enter each number: ");
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  } //2,6,1,9,7

  for(int i=1; i<n; i++){
    temp = arr[i];
    int j=0;
    for(j=i-1; j>=0 && temp <arr[j]; j--){
      arr[j+1] = arr[j];
    }
    arr[j+1] = temp;
  }

  printf("Sorted Array: ");
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  } 

  return 0;
}