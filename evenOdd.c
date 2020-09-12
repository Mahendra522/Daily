#include <stdio.h>
int main(){
  int arr[] = {1,3,5,9,2,4,6,8,10};
  int n = sizeof(arr)/sizeof(int);
  int k = 0,z=0;
  int even[10] ={0};
  int odd[10] ={0};

  for(int i=0; i<n; i++){
    if(arr[i] %2 == 0){
      even[k]= arr[i];
      k++;
    }
    else{
      odd[z] = arr[i];
      z++;
    }
  }
  printf("Even Numbers: ");
  for(int i=0; i<k; i++){
    printf("%d ",even[i]);
    }

  printf("\n\n");

  printf("Odd Numbers: ");
  for(int i=0; i<z; i++){
    printf("%d ",odd[i]);
    }

  return 0;
}