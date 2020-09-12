#include <stdio.h>

int * searchFunc(int[*], int);
int * searchFunc(int a[5], int value){

  int result[2];
  int mid=5/2;
  int flag = 0;

  if(a[mid] == value)
    {
      flag=1;
        result[0]=mid+1;
        result[1] = flag;

        return result;
        }
  
  if (value < a[mid])
  {
    for(int i=0; i<mid; i++){
      if(a[i] == value){
        flag=1;
        result[0]=i+1;
        result[1] = flag;

        return result;
        //break;
      } 
      else 
        continue;
      }
      if(flag == 0){
        result[0]=0;
        result[1] = flag;
        
        return result;
      }
        
    }

  if (value > a[mid])
  {
    for(int i=mid+1; i<5; i++){
      if(a[i] == value){
        flag=1;
        result[0]=i+1;
        result[1] = flag;

        return result;
        //break;
      }
        
      else {
         continue;
      }
      if(flag == 0){
        result[0]=0;
        result[1] = flag;
        
        return result;
      }
       
    }
  }  
}

  


int main(){
  int arr[6]={9,20,12,7,10};
  int j=0;
  for(j=0; j<5; j++){
   for(int i=0; i<5; i++){
    int temp = 0;
    if(arr[i] < arr[i+1])
      continue;
    else{
      if(i==4) break;
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    } 
   } 
  }
  printf("Sorted Array: ");
  for(int i=0; i<5; i++)
    printf("%d ",arr[i]);

  int value;
  printf("Enter the Number you wanted to serach: ");
  scanf("%d",&value);
  int *p = searchFunc(arr,value);

  //[0,0]
  if(*(p+1) == 0){
    printf("Value Does Not Exist. \n");
  }
  else{
    printf("Value Exist at position %d \n",*(p+0));
  }
  {
    printf("************** Inserting 13 at index 2********************");
  int index=2,insert=13;
  for(int i=4; i>=index; i--){
    arr[i+1] = arr[i];
  }
  arr[index] = insert;
  for(int i=0; i<6; i++){
    printf("%d ",arr[i]);
  }
  }

  printf("Recent Array Value");
  for(int i=0; i<6; i++){
    printf("%d ",arr[i]);
  }

  {
  printf("************** Deleting 13 from index 2********************\n");
  int index=2;
  for(int i=index; i<6; i++){
     arr[i] = arr[i+1];
  }
  for(int i=0; i<5; i++){
    printf("%d ",arr[i]);
  }
  
  }

  printf("************** Alternate Elements of an Array********************\n");
  for(int i=0; i<5; i+=2){
    printf("%d ",arr[i]);
  }

  printf("************** Maximum and Minimum of an Array********************\n");
  int max=0,min=0;
  max= arr[0];
  min= arr[0];
  for(int i=0; i<5; i++){
    if(max > arr[i]) continue;
    else
      max = arr[i];
  }
  for(int i=0; i<5; i++){
    if(min < arr[i]) continue;
    else
      min = arr[i];
  }
  
  printf("Minimum value:%d Maximum value: %d\n\n",min,max);
  return 0;
}