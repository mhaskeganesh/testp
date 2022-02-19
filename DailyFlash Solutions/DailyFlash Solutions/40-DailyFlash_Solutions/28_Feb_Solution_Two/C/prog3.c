#include<stdio.h>

int main() {
	int num;
	printf("Enter num : ");
	scanf("%d", &num);
	int m1 = 9, m2, rem, cnt = 0;
	while(num != 0) {
		rem = num % 10;
		if(rem <= m1) {
			m2 = m1;
			m1 = rem;
		} else if(rem < m2) {
			m2 = rem;
		}
		num /= 10;
	}
	printf("Sec min : %d", m2);
}
