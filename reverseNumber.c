#include <stdio.h>
#include <math.h>

int main(void) {
	int number=0,result[10]={0};
	int count=0, temp=0;
	int sum=0;
	printf("*Enter a number: \n");
	scanf("%d",&number);
	//345
	temp=number;
	for(int i=0;temp!=0;i++){
	    result[i]=temp%10;
	    temp = temp/10;
	    count++;
	}
	printf("*Total count of digits in a number:%d \n",count);
	
	for(int i=0; i<count; i++){
	  sum = sum+result[i];
	}
	printf("*Sum of all digits in a number:%d \n",sum);
	
	printf("*Elements in the array: ");
	
	for(int i=0; i<count; i++){
	  printf("%d ",result[i]);
	}
	printf("\n");
	
	
	
	int L_index=0,power=0,sumR=0;
	L_index=count-1;
	
	for(int i=0; i<count; i++){
	  power=L_index-i;
	  sumR = sumR + result[i] * pow(10, power);
	}
	printf("*Reverse of the given number: %d\n",sumR);
	
	return 0;
}

