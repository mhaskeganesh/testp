
#include <stdio.h>
#include <stdlib.h>

void main () {

	int *kbd, n;
	printf("Enter Size : ");
	scanf("%d", &n);
	kbd = (int*)malloc(4*n);
	for(int i = 0; i<n; i++)
		scanf("%d",(kbd + i));
	
	for(int i = 0; i<n; i++)
		printf("%d ",*(kbd + i));

}
