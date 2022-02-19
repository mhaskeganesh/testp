
import java.io.*;

class Thrashing {
	public static void main(String ... kbd) throws IOException {
		
		int k = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			k = Integer.parseInt(br.readLine());
		}
		catch (NumberFormatException ne){
			System.out.println("Not a Number");
			System.exit(0);
		}
		if(k % 2 == 0)
			System.out.printf("Even Number\n");
		else
			System.out.printf("Odd Number\n");
		return;
	}
}
