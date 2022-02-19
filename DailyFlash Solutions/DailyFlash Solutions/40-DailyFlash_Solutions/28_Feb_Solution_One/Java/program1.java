
import java.io.*;
class Program {
	public static void main (String ... kanif) throws IOException {
	
		int n, rev = 0,temp, sum = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		temp = n;
		while(n != 0){
			rev = rev * 10 + n %10;
			n =  n /10;
		}
		n = rev;
		rev = temp;
		temp = 1;
		while(n != 0){
			
			sum = sum + (int)(Math.pow(n % 10, temp));
			temp++;
			n = n / 10;
		}
		if(sum == rev)
			System.out.printf("%d is Disarium Number\n", sum);
		else
			System.out.printf("%d is Not Disarium Number\n", rev);
	}
}
