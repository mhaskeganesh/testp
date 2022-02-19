#include<stdio.h>
#include<math.h>

int fact(int n) {
	if(n == 1)
		return 1;
	return n * fact(n - 1);
}

int main() {
	int l;
	float sum = 0;
	printf("Length : ");
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		sum += i / (float)fact(i);	
	}
	printf("%f", sum);
}
