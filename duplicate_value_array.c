//Question is to find common elements in an array.

#include <stdio.h>

int main(){
  int a[] = {1,2,3,5,6,7,4};
  int n= sizeof(a) / sizeof(int);
  printf("%d: size of a\n",n);
  // Question is to find duplicate values in the array.
  // Here 1 and 4 has a duplicate values
  int result[10] = {0};

  int k=0;
  for(int i=0; i<n; i++)
  {
    
    for(int j=i+1; j<n; j++)
    {
     if(a[i] == a[j])
      {
       result[k] = a[i];
        k++;
        break;
      }
      
    }  
  }

  if(k==0)
    printf("No Duplicate Values found\n");
  
  else{
  
    for(int i=0; i<k; i++){
    printf("%d ",result[i]);
  }

  }
  
  return 0;
}