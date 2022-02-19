
import java.io.*;

class Program {
	
	public static void main(String [] kbd) throws IOException {

		int a;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Number :");
		a = Integer.parseInt(br.readLine());
		if(a > 0){ 
			System.out.println("Number is Positive");
		} 
		else if  (a == 0){
			System.out.println("Number is equal to zero");
		}
		else{
			System.out.println("Number is Negative");
		}

	}
}
