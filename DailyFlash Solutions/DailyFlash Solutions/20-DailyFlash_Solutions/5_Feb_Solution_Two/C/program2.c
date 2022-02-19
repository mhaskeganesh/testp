
#include <stdio.h>
#include<string.h>

int main () {

	char p[10];
	printf("Enter String : ");
	fgets(p, sizeof(p), stdin);
	int len = strlen(p);
	if(len == 9 && p[8] == '\n'){
		p[8] = '\0';	
	}
	else if(len != 9){
		p[len-1] = '\0';
	}	
	len = strlen(p);
	int num = 0,ct = 0,j = 0, i = len % 3;
	if(i != 0){
		while(j < len % 3){
			num = num*2 + (p[j]-'0');
			j++;	
		}
		printf("%d", num);
	}
	num = 0;
	while(i < len){
		num = num*2 + (p[i]-'0');
		i++;
		ct++;
		if(ct == 3){
			ct = 0;
			printf("%d",num);
			num = 0;
		}
	}	
	printf("\n");
}

