#include<stdio.h>

int main(){

	int row,col;
	

	printf("Enter no of columns : \t");
	scanf("%d",&col);

	row=(2*col)-1;

	for(int i=0; i<row; i++){	
		for(int j=0; j<col; j++){

			if(i+j>=row/2 && i-j<=row/2){
												
				printf("%d\t",((i*i)*((j+1) * (j+1))));
			}
			else
				printf("\t");
			
		}
		printf("\n");
	}
	return 0;
}
