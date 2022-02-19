
import java.io.*;

class Program {
	public static void  main(String [] kanif) throws IOException {
		int n, temp, i = 0;
		char bin[] = {'0', '0', '0','0'};
		System.out.println("Enter Number :");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		temp = n;
		while(temp!=0) {
			System.out.println(Integer.toString(n) + "/" + (temp%10) + " = " + (n /(temp%10)));
			temp = temp/10;
		}
	}
}	
