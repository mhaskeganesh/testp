#include<iostream>
#include<string.h>

int main() {
	char arr[10];
	int i;
	printf("Enter bin : ");
	std::cin.getline(arr, sizeof(arr));
	int length = strlen(arr);
	if(length % 3 == 0) {
		i = 0;
	} else {
		i = length % 3;
	}
	int d = 0, num;
	if(i != 0) {
		for(int j = 0; j < i; j++) {
			if(arr[j] == '0')
				num = 0;
			else if(arr[j] == '1')
				num = 1;
			d = d * 2 + num;
		}
		std::cout << d;
	}
	int cnt = 0;
	d = 0;
	for(int j = i; j < length; j++) {
		if(arr[j] == '0')
			num = 0;
		else if(arr[j] == '1')
			num = 1;
		d = d * 2 + num;
		cnt++;
		if(cnt % 3 == 0) {
			std::cout << d;
			d = 0;
		}
	}
	return 0;
}
