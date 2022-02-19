#include<stdio.h>
#include<math.h>
int main() {
	int n, sum = 0, num;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	float avg = (float)sum / (float)n;
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (arr[i] - avg) * (arr[i] - avg);
	}
	int ch;
	while(1) {
		printf("\n1.Avg\n2.Var\n3.SD\nEnter ch : ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
				printf("%f", avg);
				break;
			case 2:
				printf("var : %f", (float)sum / n);
				break;
			case 3:
				printf("std dav : %f", sqrt((float)sum / n));
				break;
			
		}
	}
}
