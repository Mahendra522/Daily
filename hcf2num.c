#include <stdio.h>

int result[30]={0};

int hcf(int x,int y){
  int temp_x=0,temp_y=0,factor=2,i=0;
  int hcf_V=1;
  temp_x=x;
  temp_y=y;
  while(temp_x!=1 && temp_y!=1){
    if(! (factor <= temp_x && factor <=temp_y)){
      return factor;
    }
    else{
      if(temp_x%factor ==0 && temp_y%factor==0){
        temp_x = temp_x/factor;
        temp_y = temp_y/factor;
        result[i] = factor;
        i++;
      }
      else
        factor++;
    }
    
  }
  for(int j=0; j<i; j++){
    hcf_V = hcf_V * result[j];
  }
  
  return hcf_V;
}

int main(){
  int x=0,y=0;
  int hcf_Value=0;
  printf("Enter 2 numbers: ");
  scanf("%d%d",&x,&y);
  hcf_Value = hcf(x, y);
   printf("\nHCF of 2 numbers: %d",hcf_Value);

  return 0;
}