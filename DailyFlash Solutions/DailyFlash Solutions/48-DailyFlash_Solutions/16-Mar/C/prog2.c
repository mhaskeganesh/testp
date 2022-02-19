#include<stdio.h>
#include<math.h>
int main() {
	int num, n;
	printf("Enter num : ");
	scanf("%d", &num);
	printf("Enter n : ");
	scanf("%d", &n);
	int temp = num;
	int cnt = 0;
	while(temp != 0) {
		cnt++;
		if(temp % 10 == 1) {
			num += (n - 1) * pow(10, cnt - 1);	
		}
		temp /= 10;
	}
	printf("%d", num);
}
