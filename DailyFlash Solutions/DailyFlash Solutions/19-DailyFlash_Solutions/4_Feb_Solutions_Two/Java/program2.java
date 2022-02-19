

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
			
		int n = 0, flag = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}

		int k, d = 0,i = 0;
		while(n != 0){
			if(n%10 != 1 && n%10 != 0)
				System.exit(0);
			d = d + (n % 10) * (int)Math.pow(2,i);
			n = n / 10;
			i++;
		}

		System.out.printf("%d\n", d);
	}
}

