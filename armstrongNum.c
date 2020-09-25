#include <stdio.h>
#include <math.h>

int main(){
  int numArr[4]={0};
  int num=1;
  int sum=0;
  int i=0,count=0;
  while(num!=10000){
    i = num;
      while(i!=0){
        numArr[count] = i%10;
        i = i/10;
        count++;
      }

      for(int j=0;j<count;j++){
        sum = sum +pow(numArr[j],count);
      }
      count = 0;
      if(sum == num){
        printf("%d ",num);
      }
      sum =0;
    num++;
  }
  return 0;
}