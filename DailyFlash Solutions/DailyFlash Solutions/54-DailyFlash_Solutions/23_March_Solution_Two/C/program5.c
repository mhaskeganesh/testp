
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

void main () {
	int n,t;
	float sum = 0,var = 0,dev;
	char ch;
	int choice;
	printf("Total Number : ");
	scanf("%d", &t);
	int *arr = (int *)malloc(4*t);

	printf("Enter Numbers : ");
	for(int i = 1; i <= t; i++) {
		scanf("%d", &n);
		arr[i] = n;
		sum = sum + n;
	}
	sum = sum / t;
	for(int i = 0; i< t; i++){
		var = var + pow(arr[i] - (int)(sum),2);	
	}
	printf("1:Average\n");
	printf("2:Variance\n");
	printf("3:Standard Deviation\n");
	printf("Enter choice : \n");
	
	do {
		scanf("%d", &choice);
		switch(choice) {
			case 1:
				printf("Average = %f\n",sum);
				break;
			case 2:
				var = var/t;
				printf("Variance = %f\n", var);
				break;
			case 3:
				printf("Standard Deviation = %f\n",sqrt(var));
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
		printf("Do you want to Continue : press y/n");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y' || ch == '\n');
}
