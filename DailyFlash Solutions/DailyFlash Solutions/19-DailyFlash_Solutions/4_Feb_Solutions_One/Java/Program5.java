import java.io.*;


class Program3{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter the value in feets : ");
		int feet = Integer.parseInt(br.readLine());

		System.out.printf("Value in cm : %d cm",feet*30);	
	}	
}	
