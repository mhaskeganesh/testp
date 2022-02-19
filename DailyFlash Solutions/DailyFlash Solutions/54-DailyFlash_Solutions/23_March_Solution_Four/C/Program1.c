#include <stdio.h>

void main() {


	char inp[50] = {'\0'};
	printf("Enter a String\n");
	fgets(inp,sizeof(inp),stdin);
	char cmp[6] = "AEIOU";
	char vow[30] = {'\0'};
	int cnt = 0;

	for(int i = 0; inp[i] != '\0'; i++){

		for(int j = 0; j < 5; j++){

			if(inp[i] == cmp[j] || inp[i] == (cmp[j] + 32)){
				vow[cnt++] = inp[i];
				break;
			}
		}
	}

	printf("ASCII Values of Vowels in entered String are\n");
	for(int j = 0; vow[j] != '\0' ; j++)
		printf("%c : %d\n",vow[j],(int)vow[j]);

}
