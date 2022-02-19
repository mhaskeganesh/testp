import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	


		int n;
		System.out.printf("Enter Number :");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());
		while(n!=0) {
			if(n % (n%10) == 0){
				System.out.printf("%d ", n%10);
			}
			n = n/10;
		}
		System.out.printf("\n");
	}
}