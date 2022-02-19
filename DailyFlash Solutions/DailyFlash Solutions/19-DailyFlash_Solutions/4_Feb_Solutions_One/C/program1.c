#include<stdio.h>


void main(){
	
	int flag = 0;

	for(int itr = 2 ; itr<=100 ;itr++){

		flag=0;
		for(int jtr = 2 ; jtr<=itr/2;jtr++){
			
			if(itr%jtr==0){
				flag = 1;
			       	break;
			}

		}	
		if(flag==0)
			printf("%d\t",itr);
	}	
	
}	
