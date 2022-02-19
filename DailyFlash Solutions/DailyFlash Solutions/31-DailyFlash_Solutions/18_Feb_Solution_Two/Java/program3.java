
import java.io.*;
class Program {
		public static void main(String[] args) throws IOException {
		
		int n;
		System.out.printf("Enter Radius :");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());
		if(n<0){
			System.out.printf("Radius cannot be negative\n");
			System.exit(0);
		}
		System.out.printf("Circumference : %5.2fcm\n", 2*3.142*n);
	}
}