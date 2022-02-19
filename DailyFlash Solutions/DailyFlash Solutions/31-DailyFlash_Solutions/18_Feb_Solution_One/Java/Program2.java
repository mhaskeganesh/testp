import java.io.*;


class Program2{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine()); 
		
	 	int sum =0 ;
		int count=0;
		while(num!=0){
		
			int rem = num%10;

			sum =sum+rem;

			count++;

			num = num/10;


		}	

		System.out.printf("Sum = %d\n",sum);
		System.out.printf("average = %d",sum/count);	 
	}	
}	
