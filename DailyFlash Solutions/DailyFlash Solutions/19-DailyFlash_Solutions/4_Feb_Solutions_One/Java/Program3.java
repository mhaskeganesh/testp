import java.io.*;


class Program5{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter the number : ");
		int num = Integer.parseInt(br.readLine());

		int sum = 0 ;


		for(int itr = 1;itr<=num/2;itr++){

		if(num%itr==0)
			sum =sum + itr;

	}

		System.out.printf("Sum of all possible divisors of %d is : %d ",num,sum);
	
	}	
}	
