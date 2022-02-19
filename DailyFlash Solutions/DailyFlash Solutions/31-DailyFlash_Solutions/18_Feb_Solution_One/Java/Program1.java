import java.io.*;


class Program1{

	
	public static void main(String args[])throws IOException{
		
		BufferedReader br  =new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the first number : "); 
		int start = Integer.parseInt(br.readLine()); 
		System.out.println("Enter the  number  of elements : "); 
		int number = Integer.parseInt(br.readLine()); 
		System.out.println("Enter the diff number : "); 
		int difference = Integer.parseInt(br.readLine()); 

		int temp=start;
		for(int itr =1 ; itr<=number ; itr++){
		
			System.out.printf("%d\t",temp);

			temp = temp + difference;
		
		}
	}	
}	
