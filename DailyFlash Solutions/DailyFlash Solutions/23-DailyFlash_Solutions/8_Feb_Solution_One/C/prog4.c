#include<stdio.h>

int main(void) {
	int cnt;
	for(int i = 0; i < 4; i++) {
		cnt = 0;
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i) {
				printf("  ");
			}
			else {
				if(cnt == 0)
					printf("= ");
				else 
					printf("%d ", cnt);
				cnt++;
			}
		}
		printf("\n");	
	}
	return 0;
}
