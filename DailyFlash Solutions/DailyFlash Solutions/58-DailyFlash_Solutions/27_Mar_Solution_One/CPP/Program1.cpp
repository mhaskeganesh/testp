#include <stdio.h>

int main() {


	char inp[50] = {'\0'};
	printf("Enter a String\n");
	fgets(inp,sizeof(inp),stdin);
	char cmp[6] = "AEIOU";
	char vow[30] = {'\0'};
	int cnt = 0;

	for(int i = 0; inp[i] != '\0'; i++){

		for(int j = 0; j < 5; j++){

			if(inp[i] == cmp[j] || inp[i] == (cmp[j] + 32)){
				inp[i] = inp[i] + 1;
				break;
			}
		}
	}

	printf("Replaced String\n%s",inp);
	return 0;
}
