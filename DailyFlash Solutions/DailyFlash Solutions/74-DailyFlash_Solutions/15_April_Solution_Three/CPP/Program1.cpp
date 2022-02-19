#include <stdio.h>
#include <string.h>

int main() {

	char inp[100] = {'\0'};

	printf("Input a string\n");
	fgets(inp,sizeof(inp),stdin);

	char sub[100] = {'\0'};
	printf("Input Sub-string\n");
	fgets(sub,sizeof(sub),stdin);

	char copy[100] = {'\0'};
	int l = strlen(sub);
	l--;


	int start = 0;

	for(int i = 0; inp[i] != '\n'; i++){

		int lc1 = 0,lc2 = 0;
		if(inp[i] == sub[0]){

			start = i;	
			for(lc1 = 0,lc2 = i; lc1 < l && inp[lc2] != '\0' ;lc1++,lc2++){

				if(inp[lc2] != sub[lc1]){

					start = 0;
					break;
				}
			}
		}
		if(lc1-1 == l){

			break;
		}

	}

	if(start == 0){

		printf("Sub String Not Found\n");
	}
	else {

		for(int i = 0,j = 0; inp[i] != '\n' ; i++,j++){

			if(i >= start && i < start+l){

				j--;
			}else{

				copy[j] = inp[i];
			}
		}
		printf("Output String is \n%s\n",copy);
	}	

	return 0;
}
