#include <stdio.h>

int main(void) {
	int m1[3][3]={0};
	int m2[3][3]={0};
  int result[3][3]={0};
	
	
	printf("Enter elements of first Matrix:" );
	for(int i=0; i<3; i++){
    for(int j=0; j<3;j++){
	        scanf("%d",&m1[i][j]);
	    }
  }

  printf("Enter elements of Second Matrix:" );
	for(int i=0; i<3; i++){
    for(int j=0; j<3;j++){
	        scanf("%d",&m2[i][j]);
	    }
  }
	    
  
	for(int i=0; i<3; i++){
	    for(int j=0; j<3;j++){
	        result[i][j] = m1[i][j] + m2[i][j];
	    }
	}

  printf("Addition of 2 Matrix: \n" );
  for(int i=0; i<3; i++){
	    for(int j=0; j<3;j++){
	        printf("%d ",result[i][j] );
	    }
	    printf("\n" );
	}
	
	return 0;
}

