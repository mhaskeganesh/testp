
#include<stdio.h>
void exit(int);

void main() {
	
	int n = 0;
	printf("Enter Numbers : ");
	for(int i = 1; i<=10; i++){
		scanf("%d",&n);
		if(n<0)
			break;
	}
	
}
