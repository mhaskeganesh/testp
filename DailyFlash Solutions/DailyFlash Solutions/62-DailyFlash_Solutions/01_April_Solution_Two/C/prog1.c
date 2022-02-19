#include<stdio.h>
#include<math.h>

int fact(int n) {
	if(n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
	int l, x, y;
	float sum = 0;
	printf("Length : ");
	scanf("%d", &l);
	printf("X Y: ");
	scanf("%d %d", &x, &y);
	for(int i = 1; i <= l; i++) {
		sum += (i * (x + y)) / (float)fact(i);	
	}
	printf("%f", sum);
}
