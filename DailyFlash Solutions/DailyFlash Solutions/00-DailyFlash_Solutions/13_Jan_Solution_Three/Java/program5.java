
import java.io.*;

class Program {
	
	public static void main(String [] kbd) throws IOException {

		int a;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Number :");
		a = Integer.parseInt(br.readLine());
		
		System.out.println((a % 5 == 0 && a % 11 == 0)? "Number is divisible by 5 & 11"
		: "Number is not divisible by 5 & 11");

	}
}
