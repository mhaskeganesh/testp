#include<stdio.h>
#include<math.h>
int main() {
	printf("Enter a num : ");
	int num;
	scanf("%d", &num);
	printf("Cube root : %lf", pow(num, 1.0 / 3.0));
}
