#include<stdio.h>
#include<string.h>


void main(){
	
	char ch[100];
	char* input=ch;
	
	fgets(input,50,stdin);


	while(*input!='\0'){
		
		switch(*input){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				printf("%c : %d\n",*input,*input);	
			
		}	

		input++;
		
	}	
	

}	
