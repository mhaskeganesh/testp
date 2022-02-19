
import java.io.*;
class Program {
public static void main(String[] args) throws IOException {
		int n = 4;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : ");
		n = Integer.parseInt(br.readLine());
		if(n < 0)
			return;
		int min = n%10;
		while(n != 0){
			if(min > n % 10 ){
				min = n % 10;
			}
			n = n /10;
		}
		System.out.printf("min : %d\n", min);
	}
}
