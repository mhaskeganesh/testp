#include<iostream>

// prototype

int powerOf2(int,int);

int main(){

	int num,rem; 
	int position=1,power=1;
	printf("Enter digit the binary number \n");
	scanf("%d",&num);
	int sum = 0;
	while(num!=0){
		
		rem = num%10;

		if(rem == 1){

			sum = sum + power; 
		}

		power = powerOf2(2,position);	
		position++;

		num = num/10;
		
	}	


	printf("Decimal\n");
	printf("%d\n",sum);

	int rev = 0;
	while(sum!=0){
		
		rem = sum%8;
		rev = 10*rev+rem;
		
		sum = sum/8;
			
	}

	//reverse octal
	int ans=0;
	while(rev!=0){
		rem = rev%10;
		ans = 10*ans + rem;

		rev = rev/10;
	}

	printf("Octal\n");
	printf("%d",ans);	
		

		
	

}	


int powerOf2(int under , int upper){


	while(upper !=1){
		
		under = 2*under;
		upper--;
	}	

	return under;

}	
