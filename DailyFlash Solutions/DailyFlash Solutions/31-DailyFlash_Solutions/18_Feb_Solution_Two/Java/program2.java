import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	

		int n, k = 0;
		double sum = 0;
		System.out.printf("Enter Number :");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());
		while(n!=0) {
			sum = sum + (n%10);
			k++;
			n = n/10;
		}
		System.out.printf("Average : %5.2f\nSum : %5.2f\n", sum/k, sum);
	}
}