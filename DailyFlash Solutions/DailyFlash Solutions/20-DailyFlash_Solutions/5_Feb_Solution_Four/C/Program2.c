int printf(const char* , ...);
int scanf(const char* , ...);
#include<math.h>

void main(void){

	int num , num1 , num2 = 0 , cnt = 0 , cnt1 = 0 , o2 = 0;
	printf("Enter a binary number : ");
	scanf("%d",&num);
	int numcp = num ;
	int numcp1 , it = 0 , it1 = 0;
	//For counting the number of digits in number
	while(numcp > 0){

		numcp1 = numcp % 10 ;
		numcp = numcp / 10 ;
		it++;
	}
	int arr[it] ;
	while(num > 0){
		num1 = num % 10;
		num = num / 10; 
		cnt++;
		if(num1 == 1){
			num2 += pow(2,cnt1);
		}
		if(cnt == 2){
			
			arr[it1] = num2 ;
			printf("arr[%d] : %d",it1,arr[it1]);
			cnt = 0 ;
			num2 = 0 ;
			cnt1 = 0 ;
			it1++;
		}		
		cnt1++;
	}
	printf("Octal Number is : ");
	for(int i = it1 ; i >=1 ; i--){

		printf("%d",arr[i]);
	}
}
