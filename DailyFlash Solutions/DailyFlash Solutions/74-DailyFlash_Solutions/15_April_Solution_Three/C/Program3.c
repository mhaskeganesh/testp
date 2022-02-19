#include<stdio.h>

void main(){

	int row;
	printf("Enter the rows : ");
	scanf("%d",&row);

	for(int olc = 0;olc<row*2-1;olc++){
	
		for(int ilc=0;ilc<row;ilc++){
		
			if(olc+ilc>=row-1 && olc-ilc<= row-1)
				printf(" 1  ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
