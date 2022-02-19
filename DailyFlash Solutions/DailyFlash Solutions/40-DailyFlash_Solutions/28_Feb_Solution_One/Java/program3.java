
import java.io.*;
class Program {
	public static void  main(String ... kbd) throws IOException {

		int n = 4;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.printf("Enter Number : ");
		n = Integer.parseInt(br.readLine());
		if(n < 0)
			return;
		int min1 = 10;
		int min2 = 10;
		while(n != 0){
			if(min1 > n % 10){
				min2 = min1;
				min1 = n % 10;
			}
			else if(min2 > n % 10 && n%10 != min1) {
				min2 = n % 10;
			}
			n = n /10;
		}
		if(min1 != 10)
			System.out.printf("Second Min Digit : %d\n", min2);
		else
			System.out.printf("Only one Digit or all are same digit\n");

	}
}
