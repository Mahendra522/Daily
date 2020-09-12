// Question is to get array and the postion of element that u wants to delete. Delete the element with the specified postion and return a new array.

#include <stdio.h>
int main(){

  int a[20];
  int n=0;
  int pos;
  printf("Enter total number of elements: ");
  scanf("%d",&n);

  printf("Enter all the Numbers of the Array: ");
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  printf("Enter the position of element to be deleted: ");
  scanf("%d",&pos);
  

  
  return 0;
}