#include <stdio.h>
int main(){
  if(printf("Mahendra mahajan\n\n")){
    // since the printf statement is written inside if() we doesn't need the semicolon. So the printf("Mahendra Mahajan\n") will execute and return total number of characters i.e. 18. 18 is non zero so, if will evaluate it as true. 
  }
  
  // you can also executes multiple statements inside a if(), just by using the logical AND operator.

  if(printf("Tushar ") && printf("Mahendra ") && printf("Ramesh ")){
    
  }

  return 0;
}
