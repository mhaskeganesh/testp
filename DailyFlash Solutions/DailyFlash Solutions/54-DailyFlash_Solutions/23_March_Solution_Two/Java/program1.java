
import java.io.*;

class Program {

	public static void main(String[] args) throws IOException {
		int n;
		float mul;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		
		mul = 1;
		for(int i = 1; i<= n; i++){
			mul = mul+(float)i/(int)Math.sqrt(i*(i+1));
		}
		System.out.printf("%f\n",mul);
	}
}
