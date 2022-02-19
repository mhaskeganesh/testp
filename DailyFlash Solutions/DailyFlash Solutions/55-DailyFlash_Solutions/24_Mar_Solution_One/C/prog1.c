#include<stdio.h>
#include<math.h>
int main() {
	int l;
	float sum = 0;
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		sum += (i-1) * (3.14) / 6;
	}
	printf("%f", sum);
}
