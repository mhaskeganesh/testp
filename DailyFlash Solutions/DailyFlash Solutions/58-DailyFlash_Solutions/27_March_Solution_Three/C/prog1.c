#include<stdio.h>
#include<math.h>
int main() {
	int l;
	float sum = 0;
	int x, y;
	printf("X, Y : ");
	scanf("%d %d", &x, &y);
	printf("Length : ");
	scanf("%d", &l);
	for(int i = 1; i <= l; i++) {
		if(i % 2 == 1)
			sum += i / pow((x + y), x);
		else	
			sum += i / pow((x + y), y);
	}
	printf("%f", sum);
}
