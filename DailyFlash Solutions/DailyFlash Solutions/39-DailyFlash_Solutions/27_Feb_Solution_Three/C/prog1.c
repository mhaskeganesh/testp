#include<stdio.h>

int main() {
	int l, u, temp, rev;
	printf("Enter l: ");
	scanf("%d", &l);
	printf("Enter u: ");
	scanf("%d",&u);
	for(int i = l; i <= u; i++) {
		temp = i;
		rev = 0;
		while(temp != 0) {
			rev = rev * 10 + temp % 10;
			temp /= 10;
		}
		if(rev == i) {
			printf("%d ", i);
		}

	}
}
