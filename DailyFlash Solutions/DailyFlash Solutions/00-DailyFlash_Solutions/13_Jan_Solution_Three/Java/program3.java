
import java.io.*;

class Program {
	
	public static void main(String [] kbd) throws IOException {

		int a;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Number :");
		a = Integer.parseInt(br.readLine());
		
		System.out.println((a % 2 ==  0)? "Even Number" : "Odd Number");

	}
}
