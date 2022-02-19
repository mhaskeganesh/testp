
#include <stdio.h>

int main () {
	
	int n[5];
	printf("Enter Numbers : ");
	scanf("%d",(n+0));
	for(int i = 1; i < 5; i++){
		scanf("%d", &n[i]);
		if(n[i-1] > n[i]){
			printf("Loop exited with %d\n", n[i]);
			break;
		}
	}	

}
