import java.io.*;


class Program1{




	public static void main(String args[])throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter the number : ");
		double num = Double.parseDouble(br.readLine());

		double sum = 0;
		while(num!=0){
			
			sum = sum + num/Math.sqrt(num*num+1);
			num = num-1;
		}	

		System.out.printf("Sum of series : %f",sum);


	}	
	
}	
