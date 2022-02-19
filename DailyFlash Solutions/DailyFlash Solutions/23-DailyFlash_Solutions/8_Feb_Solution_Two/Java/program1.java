
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
	
		int n, sum = 0;
		System.out.printf("Enter Number: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		for(int i = 1; i <= n/2; i++){
			if(n % i == 0){
				sum = sum + i;
			}
		}
		if(sum > n){
			System.out.printf("Number is Abundant\n");
		}
		else
			System.out.printf("Number is Not Abundant\n");
	}
}