#include<iostream>
#include<math.h>

// forward declaration of the function
double average(double*,int);
double variance(double* ,int);

int main(){
	
	int len;
	double arr[100];

	printf("Enter the size of distribution : ");
	scanf("%d",&len);

	for(int itr =0  ; itr<len  ; itr++){
		
		scanf("%lf",arr+itr);

		
	}	

	char ch;
	int choice;
	do{
		printf("Enter your choice : \n");
		printf("1.Calculate average\n2.Calculate Variance\n3.calculate Standard Deviation\n");
		scanf("%d",&choice);

		switch(choice){
			//average call
			case 1:
				printf("%lf",average(arr,len));
				break;
			// variance call	
			case 2:
				printf("%lf",variance(arr,len));
				break;
			//standard deviation is sqrt of variance	
			case 3:
				printf("%lf",sqrt(variance(arr,len)));
				break;
			default:
				printf("Entered Wrong choice : ");	
		}	

		printf("\nDo you want to continue : Y/N \n");
		scanf(" %c",&ch);




	}while(ch=='Y'||ch=='y');

}	


// function defination for average
double average(double* arr,int len){

	double sum  = 0 ;

	for(int itr =0 ; itr<len ; itr++){
		
		sum = sum + *(arr+itr);
	}

	return sum/len;
		

}

// function defaintion for variance
double variance(double* arr,int len){

	
	double sum = 0;
	double avg = average(arr,len);
	for(int itr =0 ;itr<len ; itr++){

		
		sum = sum + (*(arr+itr)-avg)*(*(arr+itr)-avg);
	}	

	return sum/(len-1);



}	


