// Question is to find common elements in all the three given sorted arrays.

#include<stdio.h>
#define max 10
int main(){

  int a[] = {5,10,25,60,85};      
  int b[] = {10,15,35,60,80,85}; 
  int c[] = {2,6,2,40,5,60,85}; 
  int count = 0;
 
  int sa= sizeof(a) / sizeof(int);
  int sb= sizeof(b) / sizeof(int);
  int sc= sizeof(c) / sizeof(int);

  for(int i=0; i<sa; i++){ 
    for(int j=0; j<sb; j++){ 
      for(int k=0; k<sc; k++){
         if( (a[i] == b[j]) && (b[j] == c[k]) ) 
         {
           printf("%d is common\n",a[i]);
           count++;
         }
      }
    }
  }

  if(count == 0){
    printf("Nothing is common\n");
  }

   return 0;
}