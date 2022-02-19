import java.io.*;
class Program {
	static public void main (String ... kanif) throws IOException{
		int n;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());

		int max,rev = 0;
		System.out.printf("Enter Digit to replace 1 : ");
		max = Integer.parseInt(br.readLine());
		while(n != 0){
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		while(rev != 0){
			if(rev % 10 == 1)
				n = n * 10 + max;
			else
				n = n * 10 + rev % 10;
			rev /= 10;

		}
		System.out.printf("%d\n", n);
	}
}