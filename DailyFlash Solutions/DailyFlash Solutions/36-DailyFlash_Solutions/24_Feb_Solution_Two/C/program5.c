
#include <stdio.h>

void main() {
	char num[10] = {'\0'};
	printf("Enter Number : ");
	fgets(num,10, stdin);

	int i = 0, flag = 1, j, count = 0;
	while(num[i]!= '\n' && num[i] != '\0'){
		count = 0;
		flag = 1;
		for(j = i - 1; j >= 0; j--){
			if(num[i] == num[j]){
				flag = 0;
			}
		}
		if(flag == 0){
			i++;
			continue;
		}
		j = i;		
		while(num[j] != '\0' && num[j] != '\n'){
			if(num[j] == num[i])
				count++;
			j++;
		}
		printf("Frequency of %d : %d\n", num[i] - 48, count);
		i++;
	}
}
