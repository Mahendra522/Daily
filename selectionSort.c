//selection sort
#include <stdio.h>
int main(){
  int n=0,min=0,index=0,temp=0, flag=0;
  int arr[10] ={0};
  printf("Enter the number of elements: ");
  scanf("%d",&n);//n=5

  printf("Enter the value of each element: ");
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }//2,7,3,5,9

  for(int i=0;i<n-1;i++){
    min= arr[i];
    flag=0;
    for(int j=i+1; j<n; j++){
      if(arr[j]<min){
        min = arr[j];
        index=j;
        flag=1;
      }
    }
    if(flag ==1 ){
      temp=arr[i];
      arr[i] = arr[index];
      arr[index] = temp;
    }
    
  }

  printf("Sorted Array: ");
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");


  return 0;
}