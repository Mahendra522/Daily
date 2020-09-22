#include <stdio.h>
#include <string.h>
int main(){
  char str[20];
  printf("Enter your name: ");
  scanf("%s",str);

  printf("Total number of charcters is: %lu", strlen(str));
  return 0;
}