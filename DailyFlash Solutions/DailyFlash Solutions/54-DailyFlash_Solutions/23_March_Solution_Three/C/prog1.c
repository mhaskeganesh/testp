#include<stdio.h>
#include<math.h>
int main() {
	int l;
	float sum = 0;
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		sum += ((float)i/(sqrt(i)*((float)i + 1)));
	}
	printf("%f", sum);
}
