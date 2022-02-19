
#include <stdio.h>

void main () {
	int temp, sum = 0, u, l;
	printf("Enter Lower : ");
	scanf("%d", &l);	
	printf("Enter upper : ");
	scanf("%d", &u);	
	for(int i = l; i <= u; i++){
		temp = i;
		sum = 0;
		while(temp != 0){
			sum += temp%10;
			temp = temp / 10;
		}
		if(i % sum == 0){
			printf("%d ",i);
		}
	}
	printf("\n");
	
}
