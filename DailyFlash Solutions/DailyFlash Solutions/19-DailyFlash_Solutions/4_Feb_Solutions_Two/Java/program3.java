
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
			
		int n = 0, flag = 0;
		System.out.printf("Enter Ft : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}
		if(n < 0)
			System.exit(0);
		System.out.printf("Equivalent distance for %dft in cm is %dcm\n", n, n * 30);
	}
}
