#include<iostream>
#include<math.h>
int main() {
	int n, sum = 0, num;
	std::cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
		sum += arr[i];
	}
	float avg = (float)sum / (float)n;
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum += (avg - arr[i]) * (avg - arr[i]);
	}
	int ch;
        while(1) {
		std::cout << "\n1.Avg\n2.Var\n3.SD\nEnter ch : ";
		std::cin >> ch;
                switch(ch) {
                        case 1:
				std::cout << avg;
                                break;
                        case 2:
				std::cout << (float)sum / n;
                                break;
                        case 3:
				std::cout << sqrt((float)sum / n);
                                break;

                }
        }

}
