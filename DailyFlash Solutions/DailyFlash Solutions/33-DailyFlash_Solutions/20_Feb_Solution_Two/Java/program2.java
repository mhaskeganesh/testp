
import java.io.*;

class Program {
	public static void  main(String [] kanif) throws IOException {
		int n, temp, i = 0;
		char bin[] = {'0', '0', '0','0'};
		System.out.println("Enter Number :");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
	
		while(n!=0) {
			temp = n%10;
			i = 3;
			while(i>=0) {
				bin[i] = (char)((temp % 16) + 48);
				temp = temp / 16;
				i--;
			}
			//System.out.printf("Binary of %d : %s\n", n%10, bin);
			System.out.print("Hexadecimal of " + (n%10) + " : ");
			System.out.println(bin);
			n = n/10;
		}
	}
}	
