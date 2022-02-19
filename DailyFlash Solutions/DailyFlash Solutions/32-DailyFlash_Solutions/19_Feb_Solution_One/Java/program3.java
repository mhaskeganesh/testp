
import java.io.*;
class Program {
		public static void main(String[] args) throws IOException {
		
		float n;
		System.out.printf("Enter Circumference :");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = Float.parseFloat(br.readLine());
		if(n<0){
			System.out.printf("Circumference cannot be negative\n");
			System.exit(0);
		}
		System.out.printf("Circumference : %5.2fcm\n", n /(2*3.142));
	}
}
