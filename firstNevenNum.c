//********even numbers ********
#include <stdio.h>
int main(){
  int n=0;
  printf("Enter a Number:");
  scanf("%d",&n);

  for(int i=0; i<=n; i++)
    if(i%2 == 0){
      printf("%d ",i);
    }
  return 0;
}


//********odd numbers********

// #include <stdio.h>
// int main(){
//   int n=0,i=0;
//   printf("Enter a number: ");
//   scanf("%d",&n);
//   printf("Odd Number from 0 to %d: ",n);

//   while(i!=n+1){
//     if(i%2 !=0)
//       printf("%d ",i);
//     i++;
//   }
//   return 0;
// }

