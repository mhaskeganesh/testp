#include<stdio.h>
#include<string.h>
int main(void) {
	char bin[10];
	int i;
	printf("Enter bin : ");
	fgets(bin, sizeof(bin), stdin);
	int length = strlen(bin);
	if(length == sizeof(bin) - 1 && bin[length - 1] != '\n') {
		if(length % 3 == 0) {
			i = 0;
		} else {
			i = length % 3;
		}
	} else {
		length -= 1;
		if(length % 3 == 0) {
			i = 0;
		} else {
			i = length % 3;
		}

	}
	int d = 0;
	int num;
	if(i != 0) {
		for(int j = 0; j < i; j++) {
			if(bin[j] == '0')
				num = 0;
			else if(bin[j] == '1')
				num = 1;
			d = d * 2 + num;
		}
		printf("%d", d);
	}
	d = 0;
	int cnt = 0;
	for(int j = i; j < length; j++) {
		
		if(bin[j] == '0')
			num = 0;
		else if(bin[j] == '1')
			num = 1;
		d = d * 2 + num;
		cnt++;
		if(cnt > 0 && cnt % 3 == 0) {
			printf("%d", d);
			d = 0;
			cnt = 0;
		}
	}

	return 0;
}
