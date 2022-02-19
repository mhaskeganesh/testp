#include<iostream>

int main() {
	int cnt;
	for(int i = 0; i < 4; i++) {
		cnt = 0;
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i) {
				std::cout << "  ";
			}
			else {
				if(cnt == 0)
					std::cout << "= ";
				else 
					std::cout << cnt << " ";
				cnt++;
			}
		}
		std::cout << "\n";	
	}
	return 0;
}
