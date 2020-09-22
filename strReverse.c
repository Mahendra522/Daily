// //*******using while loop********

#include <stdio.h>

int main(){
  char str[20];
  int i=0;
  printf("Enter the word: ");
  scanf("%s",str);


  while(str[i]!='\0')
    i++;
  while(i!=0){
    printf("%c",str[i-1]);
    i--;
  }
  return 0;
}


// ******** using for loop********
// #include <stdio.h>
// int main(){
//   char str[20];
//   int i;
//   printf("Enter a word: ");
//   scanf("%s",str);

//   for(i=0;str[i]!='\0';i++);
//   for(;i!=0;i--)
//     printf("%c",str[i-1]);
//   return 0;
// }

// ******** reversing a string using strrev() function ********

// #include <stdio.h>
// #include <strings.h>

// int main(){
//   char str[20];
//   printf("Enter a word: ");
//   scanf("%s",str);
//   strrev(str); 
//   printf("%s",str);
//   return 0;
// }