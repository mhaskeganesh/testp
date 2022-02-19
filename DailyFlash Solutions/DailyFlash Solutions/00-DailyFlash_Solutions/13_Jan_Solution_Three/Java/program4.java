
import java.io.*;

class Program {
	
	static int fun(int a) { 
		for(int i = 1; i <= a*a; i++ ){
			if(i % a == 0){
				System.out.println("*");
			}
			else{
				System.out.print("* ");
			}
		}
		return 0;
	}
	
	public static void main(String [] kbd) throws IOException {

		int a;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter Size :");
		a = Integer.parseInt(br.readLine());

		if(a > 0){
			fun(a);
		}	
		else {
			System.out.println("Not Allowed");
		}

	}
}
