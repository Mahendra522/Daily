#include <stdio.h>
int main(){
  char str[20];
  int i=0;
  printf("Enter your name: ");
  scanf("%s",str);

  while(str[i] !='\0'){
    i++;
  }
  printf("Total number of characters: %d",i);
  return 0;
}