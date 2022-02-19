
import java.io.*;
class Program {
	
	public static void main(String[] args) throws IOException{

		char p[] = new char[10];
		int n = 0;
		System.out.printf("Enter Decimal Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException k){
			System.exit(0);
		}

		if(n<=0)
			System.exit(0);
		int i = 0;
		while(n != 0){
			p[i] =(char)(n%8 + 48);
			n = n/8;
			i++;
		}	
		i--;
		while(i >= 0){
			System.out.printf("%c", p[i]);
			i--;
		}
		System.out.printf("\n");
	}

}