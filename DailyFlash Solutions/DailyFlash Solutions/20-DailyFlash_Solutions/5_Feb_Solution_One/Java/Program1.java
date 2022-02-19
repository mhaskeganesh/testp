import java.io.*;


class Program1{

	
	public static void main(String args[]){

		int a=0,b=1,c;


		System.out.printf("Febonacci series : ");
		System.out.printf("%d\t",a);
		System.out.printf("%d\t",b);

		for(int i=0;i<3;i++){
		
			c = a+b;
			System.out.printf("%d\t",c);

			a=b;
			b=c;
		}
	}	

}	
